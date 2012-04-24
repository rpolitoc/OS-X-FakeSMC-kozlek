#ifndef __RADEON_CHIPINFO_H__
#define __RADEON_CHIPINFO_H__

// dong remove radeon_device_list all elsewhere to avoid redefinition
#include "RadeonChipsets.h"

static
RADEONCardInfo radeon_device_list[] = {
    { 0x3150, CHIP_FAMILY_RV380, 1, 0, 0, 0, 0 },
    { 0x3152, CHIP_FAMILY_RV380, 1, 0, 0, 0, 0 },
    { 0x3154, CHIP_FAMILY_RV380, 1, 0, 0, 0, 0 },
    { 0x3E50, CHIP_FAMILY_RV380, 0, 0, 0, 0, 0 },
    { 0x3E54, CHIP_FAMILY_RV380, 0, 0, 0, 0, 0 },
    { 0x4136, CHIP_FAMILY_RS100, 0, 1, 0, 0, 1 },
    { 0x4137, CHIP_FAMILY_RS200, 0, 1, 0, 0, 1 },
    //  {0x2a02, CHIP_FAMILY_RV770, 1, 1, 0, 0, 0 },  //Debug
    { 0x4144, CHIP_FAMILY_R300, 0, 0, 0, 0, 0 },
    { 0x4145, CHIP_FAMILY_R300, 0, 0, 0, 0, 0 },
    { 0x4146, CHIP_FAMILY_R300, 0, 0, 0, 0, 0 },
    { 0x4147, CHIP_FAMILY_R300, 0, 0, 0, 0, 0 },
    { 0x4148, CHIP_FAMILY_R350, 0, 0, 0, 0, 0 },
    { 0x4149, CHIP_FAMILY_R350, 0, 0, 0, 0, 0 },
    { 0x414A, CHIP_FAMILY_R350, 0, 0, 0, 0, 0 },
    { 0x414B, CHIP_FAMILY_R350, 0, 0, 0, 0, 0 },
    { 0x4150, CHIP_FAMILY_RV350, 0, 0, 0, 0, 0 },
    { 0x4151, CHIP_FAMILY_RV350, 0, 0, 0, 0, 0 },
    { 0x4152, CHIP_FAMILY_RV350, 0, 0, 0, 0, 0 },
    { 0x4153, CHIP_FAMILY_RV350, 0, 0, 0, 0, 0 },
    { 0x4154, CHIP_FAMILY_RV350, 0, 0, 0, 0, 0 },
    { 0x4155, CHIP_FAMILY_RV350, 0, 0, 0, 0, 0 },
    { 0x4156, CHIP_FAMILY_RV350, 0, 0, 0, 0, 0 },
    { 0x4237, CHIP_FAMILY_RS200, 0, 1, 0, 0, 1 },
    { 0x4242, CHIP_FAMILY_R200, 0, 0, 0, 1, 0 },
    { 0x4243, CHIP_FAMILY_R200, 0, 0, 0, 1, 0 },
    { 0x4336, CHIP_FAMILY_RS100, 1, 1, 0, 0, 1 },
    { 0x4337, CHIP_FAMILY_RS200, 1, 1, 0, 0, 1 },
    { 0x4437, CHIP_FAMILY_RS200, 1, 1, 0, 0, 1 },
    { 0x4966, CHIP_FAMILY_RV250, 0, 0, 0, 0, 0 },
    { 0x4967, CHIP_FAMILY_RV250, 0, 0, 0, 0, 0 },
    { 0x4A48, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x4A49, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x4A4A, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x4A4B, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x4A4C, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x4A4D, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x4A4E, CHIP_FAMILY_R420, 1, 0, 0, 0, 0 },
    { 0x4A4F, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x4A50, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x4B49, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x4B4A, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x4B4B, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x4B4C, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x4C57, CHIP_FAMILY_RV200, 1, 0, 0, 0, 0 },
    { 0x4C58, CHIP_FAMILY_RV200, 1, 0, 0, 0, 0 },
    { 0x4C59, CHIP_FAMILY_RV100, 1, 0, 0, 0, 0 },
    { 0x4C5A, CHIP_FAMILY_RV100, 1, 0, 0, 0, 0 },
    { 0x4C64, CHIP_FAMILY_RV250, 1, 0, 0, 0, 0 },
    { 0x4C66, CHIP_FAMILY_RV250, 1, 0, 0, 0, 0 },
    { 0x4C67, CHIP_FAMILY_RV250, 1, 0, 0, 0, 0 },
    { 0x4E44, CHIP_FAMILY_R300, 0, 0, 0, 0, 0 },
    { 0x4E45, CHIP_FAMILY_R300, 0, 0, 0, 0, 0 },
    { 0x4E46, CHIP_FAMILY_R300, 0, 0, 0, 0, 0 },
    { 0x4E47, CHIP_FAMILY_R300, 0, 0, 0, 0, 0 },
    { 0x4E48, CHIP_FAMILY_R350, 0, 0, 0, 0, 0 },
    { 0x4E49, CHIP_FAMILY_R350, 0, 0, 0, 0, 0 },
    { 0x4E4A, CHIP_FAMILY_R350, 0, 0, 0, 0, 0 },
    { 0x4E4B, CHIP_FAMILY_R350, 0, 0, 0, 0, 0 },
    { 0x4E50, CHIP_FAMILY_RV350, 1, 0, 0, 0, 0 },
    { 0x4E51, CHIP_FAMILY_RV350, 1, 0, 0, 0, 0 },
    { 0x4E52, CHIP_FAMILY_RV350, 1, 0, 0, 0, 0 },
    { 0x4E53, CHIP_FAMILY_RV350, 1, 0, 0, 0, 0 },
    { 0x4E54, CHIP_FAMILY_RV350, 1, 0, 0, 0, 0 },
    { 0x4E56, CHIP_FAMILY_RV350, 1, 0, 0, 0, 0 },
    { 0x5144, CHIP_FAMILY_RADEON, 0, 0, 1, 1, 0 },
    { 0x5145, CHIP_FAMILY_RADEON, 0, 0, 1, 1, 0 },
    { 0x5146, CHIP_FAMILY_RADEON, 0, 0, 1, 1, 0 },
    { 0x5147, CHIP_FAMILY_RADEON, 0, 0, 1, 1, 0 },
    { 0x5148, CHIP_FAMILY_R200, 0, 0, 0, 1, 0 },
    { 0x514C, CHIP_FAMILY_R200, 0, 0, 0, 1, 0 },
    { 0x514D, CHIP_FAMILY_R200, 0, 0, 0, 1, 0 },
    { 0x5157, CHIP_FAMILY_RV200, 0, 0, 0, 0, 0 },
    { 0x5158, CHIP_FAMILY_RV200, 0, 0, 0, 0, 0 },
    { 0x5159, CHIP_FAMILY_RV100, 0, 0, 0, 0, 0 },
    { 0x515A, CHIP_FAMILY_RV100, 0, 0, 0, 0, 0 },
    { 0x515E, CHIP_FAMILY_RV100, 0, 0, 1, 0, 0 },
    { 0x5460, CHIP_FAMILY_RV380, 1, 0, 0, 0, 0 },
    { 0x5462, CHIP_FAMILY_RV380, 1, 0, 0, 0, 0 },
    { 0x5464, CHIP_FAMILY_RV380, 1, 0, 0, 0, 0 },
    { 0x5548, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x5549, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x554A, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x554B, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x554C, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x554D, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x554E, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x554F, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x5550, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x5551, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x5552, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x5554, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x564A, CHIP_FAMILY_RV410, 1, 0, 0, 0, 0 },
    { 0x564B, CHIP_FAMILY_RV410, 1, 0, 0, 0, 0 },
    { 0x564F, CHIP_FAMILY_RV410, 1, 0, 0, 0, 0 },
    { 0x5652, CHIP_FAMILY_RV410, 1, 0, 0, 0, 0 },
    { 0x5653, CHIP_FAMILY_RV410, 1, 0, 0, 0, 0 },
    { 0x5834, CHIP_FAMILY_RS300, 0, 1, 0, 0, 1 },
    { 0x5835, CHIP_FAMILY_RS300, 1, 1, 0, 0, 1 },
    { 0x5954, CHIP_FAMILY_RS400, 0, 1, 0, 0, 1 },
    { 0x5955, CHIP_FAMILY_RS400, 1, 1, 0, 0, 1 },
    { 0x5960, CHIP_FAMILY_RV280, 0, 0, 0, 0, 0 },
    { 0x5961, CHIP_FAMILY_RV280, 0, 0, 0, 0, 0 },
    { 0x5962, CHIP_FAMILY_RV280, 0, 0, 0, 0, 0 },
    { 0x5964, CHIP_FAMILY_RV280, 0, 0, 0, 0, 0 },
    { 0x5965, CHIP_FAMILY_RV280, 0, 0, 0, 0, 0 },
    { 0x5969, CHIP_FAMILY_RV100, 0, 0, 1, 0, 0 },
    { 0x5974, CHIP_FAMILY_RS400, 0, 1, 0, 0, 1 },
    { 0x5975, CHIP_FAMILY_RS400, 1, 1, 0, 0, 1 },
    { 0x5A41, CHIP_FAMILY_RS400, 0, 1, 0, 0, 1 },
    { 0x5A42, CHIP_FAMILY_RS400, 1, 1, 0, 0, 1 },
    { 0x5A61, CHIP_FAMILY_RS400, 0, 1, 0, 0, 1 },
    { 0x5A62, CHIP_FAMILY_RS400, 1, 1, 0, 0, 1 },
    { 0x5B60, CHIP_FAMILY_RV380, 0, 0, 0, 0, 0 },
    { 0x5B62, CHIP_FAMILY_RV380, 0, 0, 0, 0, 0 },
    { 0x5B63, CHIP_FAMILY_RV380, 0, 0, 0, 0, 0 },
    { 0x5657, CHIP_FAMILY_RV380, 0, 0, 0, 0, 0 },
    { 0x5B64, CHIP_FAMILY_RV380, 0, 0, 0, 0, 0 },
    { 0x5B65, CHIP_FAMILY_RV380, 0, 0, 0, 0, 0 },
    { 0x5C61, CHIP_FAMILY_RV280, 1, 0, 0, 0, 0 },
    { 0x5C63, CHIP_FAMILY_RV280, 1, 0, 0, 0, 0 },
    { 0x5D48, CHIP_FAMILY_R420, 1, 0, 0, 0, 0 },
    { 0x5D49, CHIP_FAMILY_R420, 1, 0, 0, 0, 0 },
    { 0x5D4A, CHIP_FAMILY_R420, 1, 0, 0, 0, 0 },
    { 0x5D4C, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x5D4D, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x5D4E, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x5D4F, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x5D50, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x5D52, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x5D57, CHIP_FAMILY_R420, 0, 0, 0, 0, 0 },
    { 0x5E48, CHIP_FAMILY_RV410, 0, 0, 0, 0, 0 },
    { 0x5E4A, CHIP_FAMILY_RV410, 0, 0, 0, 0, 0 },
    { 0x5E4B, CHIP_FAMILY_RV410, 0, 0, 0, 0, 0 },
    { 0x5E4C, CHIP_FAMILY_RV410, 0, 0, 0, 0, 0 },
    { 0x5E4D, CHIP_FAMILY_RV410, 0, 0, 0, 0, 0 },
    { 0x5E4F, CHIP_FAMILY_RV410, 0, 0, 0, 0, 0 },
    { 0x7100, CHIP_FAMILY_R520, 0, 0, 0, 0, 0 },
    { 0x7101, CHIP_FAMILY_R520, 1, 0, 0, 0, 0 },
    { 0x7102, CHIP_FAMILY_R520, 1, 0, 0, 0, 0 },
    { 0x7103, CHIP_FAMILY_R520, 1, 0, 0, 0, 0 },
    { 0x7104, CHIP_FAMILY_R520, 0, 0, 0, 0, 0 },
    { 0x7105, CHIP_FAMILY_R520, 0, 0, 0, 0, 0 },
    { 0x7106, CHIP_FAMILY_R520, 1, 0, 0, 0, 0 },
    { 0x7108, CHIP_FAMILY_R520, 0, 0, 0, 0, 0 },
    { 0x7109, CHIP_FAMILY_R520, 0, 0, 0, 0, 0 },
    { 0x710A, CHIP_FAMILY_R520, 0, 0, 0, 0, 0 },
    { 0x710B, CHIP_FAMILY_R520, 0, 0, 0, 0, 0 },
    { 0x710C, CHIP_FAMILY_R520, 0, 0, 0, 0, 0 },
    { 0x710E, CHIP_FAMILY_R520, 0, 0, 0, 0, 0 },
    { 0x710F, CHIP_FAMILY_R520, 0, 0, 0, 0, 0 },
    { 0x7140, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x7141, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x7142, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x7143, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x7144, CHIP_FAMILY_RV515, 1, 0, 0, 0, 0 },
    { 0x7145, CHIP_FAMILY_RV515, 1, 0, 0, 0, 0 },
    { 0x7146, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x7147, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x7149, CHIP_FAMILY_RV515, 1, 0, 0, 0, 0 },
    { 0x714A, CHIP_FAMILY_RV515, 1, 0, 0, 0, 0 },
    { 0x714B, CHIP_FAMILY_RV515, 1, 0, 0, 0, 0 },
    { 0x714C, CHIP_FAMILY_RV515, 1, 0, 0, 0, 0 },
    { 0x714D, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x714E, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x714F, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x7151, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x7152, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x7153, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x715E, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x715F, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x7180, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x7181, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x7183, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x7186, CHIP_FAMILY_RV515, 1, 0, 0, 0, 0 },
    { 0x7187, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x7188, CHIP_FAMILY_RV515, 1, 0, 0, 0, 0 },
    { 0x718A, CHIP_FAMILY_RV515, 1, 0, 0, 0, 0 },
    { 0x718B, CHIP_FAMILY_RV515, 1, 0, 0, 0, 0 },
    { 0x718C, CHIP_FAMILY_RV515, 1, 0, 0, 0, 0 },
    { 0x718D, CHIP_FAMILY_RV515, 1, 0, 0, 0, 0 },
    { 0x718F, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x7193, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x7196, CHIP_FAMILY_RV515, 1, 0, 0, 0, 0 },
    { 0x719B, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x719F, CHIP_FAMILY_RV515, 0, 0, 0, 0, 0 },
    { 0x71C0, CHIP_FAMILY_RV530, 0, 0, 0, 0, 0 },
    { 0x71C1, CHIP_FAMILY_RV530, 0, 0, 0, 0, 0 },
    { 0x71C2, CHIP_FAMILY_RV530, 0, 0, 0, 0, 0 },
    { 0x71C3, CHIP_FAMILY_RV530, 0, 0, 0, 0, 0 },
    { 0x71C4, CHIP_FAMILY_RV530, 1, 0, 0, 0, 0 },
    { 0x71C5, CHIP_FAMILY_RV530, 1, 0, 0, 0, 0 },
    { 0x71C6, CHIP_FAMILY_RV530, 0, 0, 0, 0, 0 },
    { 0x71C7, CHIP_FAMILY_RV530, 0, 0, 0, 0, 0 },
    { 0x71CD, CHIP_FAMILY_RV530, 0, 0, 0, 0, 0 },
    { 0x71CE, CHIP_FAMILY_RV530, 0, 0, 0, 0, 0 },
    { 0x71D2, CHIP_FAMILY_RV530, 0, 0, 0, 0, 0 },
    { 0x71D4, CHIP_FAMILY_RV530, 1, 0, 0, 0, 0 },
    { 0x71D5, CHIP_FAMILY_RV530, 1, 0, 0, 0, 0 },
    { 0x71D6, CHIP_FAMILY_RV530, 1, 0, 0, 0, 0 },
    { 0x71DA, CHIP_FAMILY_RV530, 0, 0, 0, 0, 0 },
    { 0x71DE, CHIP_FAMILY_RV530, 1, 0, 0, 0, 0 },
    { 0x7200, CHIP_FAMILY_RV530, 0, 0, 0, 0, 0 },
    { 0x7210, CHIP_FAMILY_RV530, 1, 0, 0, 0, 0 },
    { 0x7211, CHIP_FAMILY_RV530, 1, 0, 0, 0, 0 },
    { 0x7240, CHIP_FAMILY_R580, 0, 0, 0, 0, 0 },
    { 0x7243, CHIP_FAMILY_R580, 0, 0, 0, 0, 0 },
    { 0x7244, CHIP_FAMILY_R580, 0, 0, 0, 0, 0 },
    { 0x7245, CHIP_FAMILY_R580, 0, 0, 0, 0, 0 },
    { 0x7246, CHIP_FAMILY_R580, 0, 0, 0, 0, 0 },
    { 0x7247, CHIP_FAMILY_R580, 0, 0, 0, 0, 0 },
    { 0x7248, CHIP_FAMILY_R580, 0, 0, 0, 0, 0 },
    { 0x7249, CHIP_FAMILY_R580, 0, 0, 0, 0, 0 },
    { 0x724A, CHIP_FAMILY_R580, 0, 0, 0, 0, 0 },
    { 0x724B, CHIP_FAMILY_R580, 0, 0, 0, 0, 0 },
    { 0x724C, CHIP_FAMILY_R580, 0, 0, 0, 0, 0 },
    { 0x724D, CHIP_FAMILY_R580, 0, 0, 0, 0, 0 },
    { 0x724E, CHIP_FAMILY_R580, 0, 0, 0, 0, 0 },
    { 0x724F, CHIP_FAMILY_R580, 0, 0, 0, 0, 0 },
    { 0x7280, CHIP_FAMILY_RV570, 0, 0, 0, 0, 0 },
    { 0x7281, CHIP_FAMILY_RV560, 0, 0, 0, 0, 0 },
    { 0x7283, CHIP_FAMILY_RV560, 0, 0, 0, 0, 0 },
    { 0x7284, CHIP_FAMILY_R580, 1, 0, 0, 0, 0 },
    { 0x7287, CHIP_FAMILY_RV560, 0, 0, 0, 0, 0 },
    { 0x7288, CHIP_FAMILY_RV570, 0, 0, 0, 0, 0 },
    { 0x7289, CHIP_FAMILY_RV570, 0, 0, 0, 0, 0 },
    { 0x728B, CHIP_FAMILY_RV570, 0, 0, 0, 0, 0 },
    { 0x728C, CHIP_FAMILY_RV570, 0, 0, 0, 0, 0 },
    { 0x7290, CHIP_FAMILY_RV560, 0, 0, 0, 0, 0 },
    { 0x7291, CHIP_FAMILY_RV560, 0, 0, 0, 0, 0 },
    { 0x7293, CHIP_FAMILY_RV560, 0, 0, 0, 0, 0 },
    { 0x7297, CHIP_FAMILY_RV560, 0, 0, 0, 0, 0 },
    { 0x7834, CHIP_FAMILY_RS300, 0, 1, 0, 0, 1 },
    { 0x7835, CHIP_FAMILY_RS300, 1, 1, 0, 0, 1 },
    { 0x791E, CHIP_FAMILY_RS690, 0, 1, 0, 0, 1 },
    { 0x791F, CHIP_FAMILY_RS690, 0, 1, 0, 0, 1 },
    { 0x796C, CHIP_FAMILY_RS740, 0, 1, 0, 0, 1 },
    { 0x796D, CHIP_FAMILY_RS740, 0, 1, 0, 0, 1 },
    { 0x796E, CHIP_FAMILY_RS740, 0, 1, 0, 0, 1 },
    { 0x796F, CHIP_FAMILY_RS740, 0, 1, 0, 0, 1 },
    { 0x9400, CHIP_FAMILY_R600, 0, 0, 0, 0, 0 },
    { 0x9401, CHIP_FAMILY_R600, 0, 0, 0, 0, 0 },
    { 0x9402, CHIP_FAMILY_R600, 0, 0, 0, 0, 0 },
    { 0x9403, CHIP_FAMILY_R600, 0, 0, 0, 0, 0 },
    { 0x9405, CHIP_FAMILY_R600, 0, 0, 0, 0, 0 },
    { 0x940A, CHIP_FAMILY_R600, 0, 0, 0, 0, 0 },
    { 0x940B, CHIP_FAMILY_R600, 0, 0, 0, 0, 0 },
    { 0x940F, CHIP_FAMILY_R600, 0, 0, 0, 0, 0 },
    { 0x9440, CHIP_FAMILY_RV770, 0, 0, 0, 0, 0 },
    { 0x9441, CHIP_FAMILY_RV700, 0, 0, 0, 0, 0 },
    { 0x9442, CHIP_FAMILY_RV770, 0, 0, 0, 0, 0 },
    { 0x9443, CHIP_FAMILY_RV700, 0, 0, 0, 0, 0 },
    { 0x9444, CHIP_FAMILY_RV700, 0, 0, 0, 0, 0 },
    { 0x9446, CHIP_FAMILY_RV700, 0, 0, 0, 0, 0 },
    { 0x9447, CHIP_FAMILY_RV700, 0, 0, 0, 0, 0 },
    { 0x944A, CHIP_FAMILY_RV770, 1, 0, 0, 0, 0 },
    { 0x944B, CHIP_FAMILY_RV770, 1, 0, 0, 0, 0 },
    { 0x944C, CHIP_FAMILY_RV770, 0, 0, 0, 0, 0 },
    { 0x944E, CHIP_FAMILY_RV770, 0, 0, 0, 0, 0 },
    { 0x9450, CHIP_FAMILY_RV770, 0, 0, 0, 0, 0 },
    { 0x9452, CHIP_FAMILY_RV770, 0, 0, 0, 0, 0 },
    { 0x9456, CHIP_FAMILY_RV770, 0, 0, 0, 0, 0 },
    { 0x945A, CHIP_FAMILY_RV770, 1, 0, 0, 0, 0 },
    { 0x945B, CHIP_FAMILY_RV770, 1, 0, 0, 0, 0 },
    { 0x9460, CHIP_FAMILY_RV790, 0, 0, 0, 0, 0 },
    { 0x9462, CHIP_FAMILY_RV790, 0, 0, 0, 0, 0 },
    { 0x946A, CHIP_FAMILY_RV790, 1, 0, 0, 0, 0 },
    { 0x946B, CHIP_FAMILY_RV790, 1, 0, 0, 0, 0 },
    { 0x947A, CHIP_FAMILY_RV790, 1, 0, 0, 0, 0 },
    { 0x947B, CHIP_FAMILY_RV790, 1, 0, 0, 0, 0 },
    { 0x9480, CHIP_FAMILY_R730, 1, 0, 0, 0, 0 },
    { 0x9487, CHIP_FAMILY_R730, 1, 0, 0, 0, 0 },
    { 0x9488, CHIP_FAMILY_R730, 1, 0, 0, 0, 0 },
    { 0x9489, CHIP_FAMILY_R730, 1, 0, 0, 0, 0 },
    { 0x948F, CHIP_FAMILY_R730, 1, 0, 0, 0, 0 },
    { 0x9490, CHIP_FAMILY_R730, 0, 0, 0, 0, 0 },
    { 0x9491, CHIP_FAMILY_R730, 0, 0, 0, 0, 0 },
    { 0x9495, CHIP_FAMILY_R730, 0, 0, 0, 0, 0 },
    { 0x9498, CHIP_FAMILY_R730, 0, 0, 0, 0, 0 },
    { 0x949C, CHIP_FAMILY_R730, 0, 0, 0, 0, 0 },
    { 0x949E, CHIP_FAMILY_R730, 0, 0, 0, 0, 0 },
    { 0x949F, CHIP_FAMILY_R730, 0, 0, 0, 0, 0 },
    { 0x94A0, CHIP_FAMILY_R730, 1, 0, 0, 0, 0 },
    { 0x94A1, CHIP_FAMILY_R730, 1, 0, 0, 0, 0 },
    { 0x94A3, CHIP_FAMILY_R730, 1, 0, 0, 0, 0 },
    { 0x94B1, CHIP_FAMILY_RV740, 0, 0, 0, 0, 0 },
    { 0x94B3, CHIP_FAMILY_RV740, 0, 0, 0, 0, 0 },
    { 0x94B4, CHIP_FAMILY_RV740, 0, 0, 0, 0, 0 },
    { 0x94B5, CHIP_FAMILY_RV740, 0, 0, 0, 0, 0 },
    { 0x94B9, CHIP_FAMILY_RV740, 0, 0, 0, 0, 0 },
    { 0x94C0, CHIP_FAMILY_RV610, 0, 0, 0, 0, 0 },
    { 0x94C1, CHIP_FAMILY_RV610, 0, 0, 0, 0, 0 },
    { 0x94C3, CHIP_FAMILY_RV610, 0, 0, 0, 0, 0 },
    { 0x94C4, CHIP_FAMILY_RV610, 0, 0, 0, 0, 0 },
    { 0x94C5, CHIP_FAMILY_RV610, 0, 0, 0, 0, 0 },
    { 0x94C6, CHIP_FAMILY_RV610, 0, 0, 0, 0, 0 },
    { 0x94C7, CHIP_FAMILY_RV610, 0, 0, 0, 0, 0 },
    { 0x94C8, CHIP_FAMILY_RV610, 1, 0, 0, 0, 0 },
    { 0x94C9, CHIP_FAMILY_RV610, 1, 0, 0, 0, 0 },
    { 0x94CB, CHIP_FAMILY_RV610, 1, 0, 0, 0, 0 },
    { 0x94CC, CHIP_FAMILY_RV610, 0, 0, 0, 0, 0 },
    { 0x94CD, CHIP_FAMILY_RV610, 0, 0, 0, 0, 0 },
    { 0x9500, CHIP_FAMILY_RV670, 0, 0, 0, 0, 0 },
    { 0x9501, CHIP_FAMILY_RV670, 0, 0, 0, 0, 0 },
    { 0x9504, CHIP_FAMILY_RV670, 1, 0, 0, 0, 0 },
    { 0x9505, CHIP_FAMILY_RV670, 0, 0, 0, 0, 0 },
    { 0x9506, CHIP_FAMILY_RV670, 1, 0, 0, 0, 0 },
    { 0x9507, CHIP_FAMILY_RV670, 0, 0, 0, 0, 0 },
    { 0x9508, CHIP_FAMILY_RV670, 1, 0, 0, 0, 0 },
    { 0x9509, CHIP_FAMILY_RV670, 1, 0, 0, 0, 0 },
    { 0x950F, CHIP_FAMILY_RV670, 0, 0, 0, 0, 0 },
    { 0x9511, CHIP_FAMILY_RV670, 0, 0, 0, 0, 0 },
    { 0x9513, CHIP_FAMILY_RV670, 0, 0, 0, 0, 0 },
    { 0x9515, CHIP_FAMILY_RV670, 0, 0, 0, 0, 0 },
    { 0x9517, CHIP_FAMILY_RV670, 0, 0, 0, 0, 0 },
    { 0x9519, CHIP_FAMILY_RV630, 0, 0, 0, 0, 0 },
    { 0x9540, CHIP_FAMILY_R710, 0, 0, 0, 0, 0 },
    { 0x9541, CHIP_FAMILY_R710, 0, 0, 0, 0, 0 },
    { 0x9542, CHIP_FAMILY_R710, 0, 0, 0, 0, 0 },
    { 0x954E, CHIP_FAMILY_R710, 0, 0, 0, 0, 0 },
    { 0x954F, CHIP_FAMILY_R710, 0, 0, 0, 0, 0 },
    { 0x9552, CHIP_FAMILY_RV710, 1, 0, 0, 0, 0 },
    { 0x9553, CHIP_FAMILY_RV710, 1, 0, 0, 0, 0 },
    { 0x9555, CHIP_FAMILY_RV710, 1, 0, 0, 0, 0 },
    { 0x9557, CHIP_FAMILY_RV710, 1, 0, 0, 0, 0 },
    { 0x955E, CHIP_FAMILY_R710, 0, 0, 0, 0, 0 },
    { 0x9580, CHIP_FAMILY_RV630, 0, 0, 0, 0, 0 },
    { 0x9581, CHIP_FAMILY_RV630, 1, 0, 0, 0, 0 },
    { 0x9583, CHIP_FAMILY_RV630, 1, 0, 0, 0, 0 },
    { 0x9586, CHIP_FAMILY_RV630, 0, 0, 0, 0, 0 },
    { 0x9587, CHIP_FAMILY_RV630, 0, 0, 0, 0, 0 },
    { 0x9588, CHIP_FAMILY_RV630, 0, 0, 0, 0, 0 },
    { 0x9589, CHIP_FAMILY_RV630, 0, 0, 0, 0, 0 },
    { 0x958A, CHIP_FAMILY_RV630, 0, 0, 0, 0, 0 },
    { 0x958B, CHIP_FAMILY_RV630, 1, 0, 0, 0, 0 },
    { 0x958C, CHIP_FAMILY_RV630, 0, 0, 0, 0, 0 },
    { 0x958D, CHIP_FAMILY_RV630, 0, 0, 0, 0, 0 },
    { 0x958E, CHIP_FAMILY_RV630, 0, 0, 0, 0, 0 },
    { 0x958F, CHIP_FAMILY_RV630, 0, 0, 0, 0, 0 },
    { 0x9591, CHIP_FAMILY_RV630, 0, 0, 0, 0, 0 },
    { 0x9593, CHIP_FAMILY_RV630, 0, 0, 0, 0, 0 },
    { 0x9598, CHIP_FAMILY_RV630, 0, 0, 0, 0, 0 },
    { 0x9599, CHIP_FAMILY_RV630, 0, 0, 0, 0, 0 },
    { 0x95C0, CHIP_FAMILY_RV620, 0, 0, 0, 0, 0 },
    { 0x95C2, CHIP_FAMILY_RV620, 1, 0, 0, 0, 0 },
    { 0x95C4, CHIP_FAMILY_RV620, 1, 0, 0, 0, 0 },
    { 0x95C5, CHIP_FAMILY_RV620, 0, 0, 0, 0, 0 },
    { 0x95C6, CHIP_FAMILY_RV620, 0, 0, 0, 0, 0 },
    { 0x95C7, CHIP_FAMILY_RV620, 0, 0, 0, 0, 0 },
    { 0x95C9, CHIP_FAMILY_RV620, 0, 0, 0, 0, 0 },
    { 0x95CD, CHIP_FAMILY_RV620, 0, 0, 0, 0, 0 },
    { 0x95CE, CHIP_FAMILY_RV620, 0, 0, 0, 0, 0 },
    { 0x95CF, CHIP_FAMILY_RV620, 0, 0, 0, 0, 0 },
    { 0x9610, CHIP_FAMILY_RS780, 1, 0, 0, 0, 0 },
    { 0x9611, CHIP_FAMILY_RS780, 1, 0, 0, 0, 0 },
    { 0x9614, CHIP_FAMILY_RS780, 1, 0, 0, 0, 0 },
    { 0x9616, CHIP_FAMILY_RS780, 1, 0, 0, 0, 0 },
    { 0x9710, CHIP_FAMILY_RS880, 1, 0, 0, 0, 0 },
    { 0x9711, CHIP_FAMILY_RS880, 1, 0, 0, 0, 0 },
    { 0x9712, CHIP_FAMILY_RS880, 1, 0, 0, 0, 0 },
    { 0x9713, CHIP_FAMILY_RS880, 1, 0, 0, 0, 0 },
    { 0x9714, CHIP_FAMILY_RS880, 1, 0, 0, 0, 0 },
    { 0x9715, CHIP_FAMILY_RS880, 1, 0, 0, 0, 0 },
    { 0x6701, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6702, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6703, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6704, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6705, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6706, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6707, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6708, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6709, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    
    { 0x6718, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6719, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x671C, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x671D, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    
    { 0x6720, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6721, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },  
    { 0x6722, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },  
    { 0x6723, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },  
    { 0x6724, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },  
    { 0x6725, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },  
    { 0x6726, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },  
    { 0x6727, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6728, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },  
    { 0x6729, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },  
    
    { 0x6738, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6739, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x673E, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6740, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6741, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6742, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6743, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6744, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6745, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6746, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6747, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6748, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6749, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    
    { 0x6750, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6758, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6759, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x675F, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6760, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6761, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6762, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6763, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6764, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6765, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6766, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6767, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6768, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6770, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6779, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6840, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6880, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x688D, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6888, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6889, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6890, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6898, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x6899, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x689C, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x689D, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x689E, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68A0, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68A1, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68A8, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68A9, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68B0, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 }, 
    { 0x68B1, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68B8, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68B9, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68BE, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68C0, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68C1, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68C8, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68C9, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68D0, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68D1, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68D8, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68D9, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68DA, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68DE, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68E0, CHIP_FAMILY_Evergreen, 1, 0, 0, 0, 0 },
    { 0x68E1, CHIP_FAMILY_Evergreen, 1, 0, 0, 0, 0 },
    { 0x68E8, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68E9, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68F0, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68F1, CHIP_FAMILY_Evergreen, 1, 0, 0, 0, 0 },
    { 0x68F8, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68F9, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    { 0x68FE, CHIP_FAMILY_Evergreen, 0, 0, 0, 0, 0 },
    {0, 0, 0, 0, 0, 0, 0 },
};

#endif /* __RADEON_CHIPINFO_H__ */