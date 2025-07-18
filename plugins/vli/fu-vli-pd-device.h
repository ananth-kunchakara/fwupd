/*
 * Copyright 2019 Richard Hughes <richard@hughsie.com>
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */

#pragma once

#include <fwupdplugin.h>

#include "fu-vli-device.h"

#define FU_TYPE_VLI_PD_DEVICE (fu_vli_pd_device_get_type())
G_DECLARE_FINAL_TYPE(FuVliPdDevice, fu_vli_pd_device, FU, VLI_PD_DEVICE, FuVliDevice)
