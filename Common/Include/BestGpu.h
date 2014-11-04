//
// <copyright file="BestGPU.h" company="Microsoft">
//     Copyright (c) Microsoft Corporation.  All rights reserved.
// </copyright>
//

#pragma once

#define CPUONLY      // #define this to build without GPU support nor needing the SDK installed

namespace Microsoft { namespace MSR { namespace CNTK {
#ifndef CPUONLY
    short DeviceFromConfig(const class ConfigParameters& config);
#else
    static inline short DeviceFromConfig(const class ConfigParameters& /*config*/) { return -1/*CPUDEVICE*/; }    // tells runtime system to not try to use GPUs
    // TODO: find a way to use CPUDEVICE without a huge include overhead; OK so far since CPUONLY mode is sorta special...
#endif
}}}
