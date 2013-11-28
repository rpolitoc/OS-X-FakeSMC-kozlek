//
//  GraphsController.m
//  HWMonitor
//
//  Created by kozlek on 24.02.13.
//  Copyright (c) 2013 kozlek. All rights reserved.
//

/*
 *  Copyright (c) 2013 Natan Zalkin <natan.zalkin@me.com>. All rights reserved.
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 *  02111-1307, USA.
 *
 */

#import "GraphsController.h"

#import "GraphsView.h"
#import "GraphsSensorCell.h"
//#import "WindowFilter.h"

#import "HWMonitorDefinitions.h"

#import "JLNFadingScrollView.h"

#import "Localizer.h"

#import "HWMEngine.h"
#import "HWMGraph.h"
#import "HWMGraphsGroup.h"
#import "HWMConfiguration.h"

//#define GetLocalizedString(key) \
//[[NSBundle mainBundle] localizedStringForKey:(key) value:@"" table:nil]

@implementation GraphsController

@synthesize selectedItem = _selectedItem;

#pragma mark
#pragma mark Properties

-(void)setMonitorEngine:(HWMEngine *)monitorEngine
{
    if (_monitorEngine != monitorEngine) {

        if (_monitorEngine) {
//            [[NSNotificationCenter defaultCenter] removeObserver:self name:HWMEngineSensorsHasBenUpdatedNotification object:_monitorEngine];
//
//            [self removeObserver:_monitorEngine forKeyPath:@"graphsAndGroups"];
//            [self removeObserver:_monitorEngine forKeyPath:@"configuration.graphsWindowAlwaysTopmost"];
//            [self removeObserver:_monitorEngine forKeyPath:@"configuration.useGraphSmoothing"];
//            [self removeObserver:_monitorEngine forKeyPath:@"configuration.graphsScaleValue"];
        }

        _monitorEngine = monitorEngine;

        if (_monitorEngine) {
//            [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(sensorValuesHasBeenUpdated) name:HWMEngineSensorsHasBenUpdatedNotification object:_monitorEngine];
//
//            [self addObserver:_monitorEngine forKeyPath:@"graphsAndGroups" options:NSKeyValueObservingOptionNew context:nil];
//            [self addObserver:_monitorEngine forKeyPath:@"configuration.graphsWindowAlwaysTopmost" options:NSKeyValueObservingOptionNew context:nil];
//            [self addObserver:_monitorEngine forKeyPath:@"configuration.useGraphSmoothing" options:NSKeyValueObservingOptionNew context:nil];
//            [self addObserver:_monitorEngine forKeyPath:@"configuration.graphsScaleValue" options:NSKeyValueObservingOptionNew context:nil];
        }
    }
}

-(HWMonitorItem *)selectedItem
{
    if (_graphsTableView.selectedRow >= 0 && _graphsTableView.selectedRow < _monitorEngine.graphsAndGroups.count) {
        id item = [_monitorEngine.graphsAndGroups objectAtIndex:_graphsTableView.selectedRow];

        if (item != _selectedItem) {
            [self willChangeValueForKey:@"selectedItem"];
            _selectedItem = item;
            [self didChangeValueForKey:@"selectedItem"];
        }
    }
    else {
        [self willChangeValueForKey:@"selectedItem"];
        _selectedItem = nil;
        [self didChangeValueForKey:@"selectedItem"];
    }
    
    return _selectedItem;
}

#pragma mark
#pragma mark Methods

-(id)init
{
    self = [super initWithWindowNibName:@"GraphsController"];
    
    if (self) {

        [[NSOperationQueue mainQueue] addOperationWithBlock:^{
            [Localizer localizeView:self.window];
            [self.window setLevel:_monitorEngine.configuration.graphsWindowAlwaysTopmost.boolValue ? NSFloatingWindowLevel : NSNormalWindowLevel];
            [self rebuildViews];

            [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(sensorValuesHasBeenUpdated) name:HWMEngineSensorsHasBenUpdatedNotification object:_monitorEngine];

            [self addObserver:self forKeyPath:@"monitorEngine.graphsAndGroups" options:NSKeyValueObservingOptionNew context:nil];
            [self addObserver:self forKeyPath:@"monitorEngine.configuration.graphsWindowAlwaysTopmost" options:NSKeyValueObservingOptionNew context:nil];
            [self addObserver:self forKeyPath:@"monitorEngine.configuration.useGraphSmoothing" options:NSKeyValueObservingOptionNew context:nil];
            [self addObserver:self forKeyPath:@"monitorEngine.configuration.graphsScaleValue" options:NSKeyValueObservingOptionNew context:nil];
        }];

    }
    
    return self;
}

-(void)dealloc
{
    [self removeObserver:self forKeyPath:@"monitorEngine.graphsAndGroups"];
    [self removeObserver:self forKeyPath:@"monitorEngine.configuration.graphsWindowAlwaysTopmost"];
    [self removeObserver:self forKeyPath:@"monitorEngine.configuration.useGraphSmoothing"];
    [self removeObserver:self forKeyPath:@"monitorEngine.configuration.graphsScaleValue"];
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

-(void)awakeFromNib
{

}

-(void)showWindow:(id)sender
{
    [NSApp activateIgnoringOtherApps:YES];
    [super showWindow:sender];
    
//    if (!_windowFilter) {
//        _windowFilter = [[WindowFilter alloc] initWithWindow:self.window name:@"CIGaussianBlur" andOptions:[NSDictionary dictionaryWithObject:[NSNumber numberWithFloat:1.25] forKey:@"inputRadius"]];
//    }
}

-(void)rebuildViews
{
    if (!_graphViews) {
        _graphViews = [[NSMutableArray alloc] init];
    }
    else {
        [_graphViews removeAllObjects];
    }

    for (HWMGraphsGroup *group in _monitorEngine.configuration.graphGroups) {
        GraphsView *graphView = [[GraphsView alloc] init];

        [graphView setGraphsController:self];
        [graphView setGraphsGroup:group];

        [_graphViews addObject:graphView];
    }

    [_graphsCollectionView setContent:_graphViews];
    
    [_graphsCollectionView setMinItemSize:NSMakeSize(0, 80)];
    [_graphsCollectionView setMaxItemSize:NSMakeSize(0, 0)];
    
    [[_graphsCollectionView content] enumerateObjectsUsingBlock:^(id obj, NSUInteger idx, BOOL *stop) {
        [[_graphsCollectionView itemAtIndex:idx] setView:obj];
    }];
    
    [_graphsTableView reloadData];
}

#pragma mark
#pragma mark Events

-(void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary *)change context:(void *)context
{
    if ([keyPath isEqual:@"monitorEngine.graphsAndGroups"]) {
        [self rebuildViews];
    }
    else if ([keyPath isEqual:@"monitorEngine.configuration.graphsWindowAlwaysTopmost"]) {
        [self.window setLevel:_monitorEngine.configuration.graphsWindowAlwaysTopmost.boolValue ? NSFloatingWindowLevel : NSNormalWindowLevel];
    }
    else if ([keyPath isEqual:@"monitorEngine.configuration.useGraphSmoothing"]) {
        [self graphsNeedDisplay:self];
    }
    else if ([keyPath isEqual:@"monitorEngine.configuration.graphsScaleValue"]) {
        [self graphsNeedDisplay:self];
    }
}

-(void)sensorValuesHasBeenUpdated
{
    if ([self.window isVisible] || _monitorEngine.configuration.updateSensorsInBackground.boolValue) {
        for (GraphsView *view in _graphViews) {
            [view captureDataToHistoryNow];
        }
    }
}

-(IBAction)graphsNeedDisplay:(id)sender
{
    for (id graphView in _graphViews) {
        [graphView setNeedsDisplay:YES];
    }
}

#pragma mark
#pragma mark NSTableView delegate

- (NSInteger)numberOfRowsInTableView:(NSTableView *)tableView
{
    return _monitorEngine.graphsAndGroups.count;
}

-(CGFloat)tableView:(NSTableView *)tableView heightOfRow:(NSInteger)row
{
    return 19;
}

- (BOOL)tableView:(NSTableView *)tableView shouldSelectRow:(NSInteger)row
{
    return ![[_monitorEngine.graphsAndGroups objectAtIndex:row] isKindOfClass:[HWMGraphsGroup class]];
}

//-(BOOL)tableView:(NSTableView *)tableView isGroupRow:(NSInteger)row
//{
//    return [[_items objectAtIndex:row] isKindOfClass:[NSString class]];
//}

-(id)tableView:(NSTableView *)tableView objectValueForTableColumn:(NSTableColumn *)tableColumn row:(NSInteger)row
{
    return [_monitorEngine.graphsAndGroups objectAtIndex:row];
}

-(NSView *)tableView:(NSTableView *)tableView viewForTableColumn:(NSTableColumn *)tableColumn row:(NSInteger)row
{
    id item = [_monitorEngine.graphsAndGroups objectAtIndex:row];
    return [tableView makeViewWithIdentifier:[item identifier] owner:self];
}

@end
