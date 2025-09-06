/************************************************************************
 * NASA Docket No. GSC-18,920-1, and identified as “Core Flight
 * System (cFS) Health & Safety (HS) Application version 2.4.1”
 *
 * Copyright (c) 2021 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. You may obtain
 * a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ************************************************************************/

/**
 * @file
 *   Health and Safety (HS) application system monitor component.
 *
 * Access functions to read system monitor variables such as CPU utilization,
 * temperature, and other health metrics.  Typically these go through the PSP
 * as they are platform-specific.
 */

/*************************************************************************
** Includes
*************************************************************************/
#include "hs_sysmon.h"
#include "hs_internal_cfg.h"
#include "hs_app.h"

#include "cfe.h"
#include "cfe_psp.h"
#include "osapi.h"

/*
 * --------------------------------------------------------
 * Initialize The System Monitor functions
 * --------------------------------------------------------
 */
CFE_Status_t HS_SysMonInit(void)
{
    CFE_Status_t StatusCode = CFE_SUCCESS;

    CFE_ES_WriteToSysLog("HS_SysMonInit() not implemented, this is a cFS Basecamp proxy stub\n");

    return StatusCode;
}

void HS_SysMonCleanup(void)
{
    CFE_ES_WriteToSysLog("HS_SysMonCleanup() not implemented, this is a cFS Basecamp proxy stub\n");
}

/*
 * --------------------------------------------------------
 * Obtain the System CPU utilization information
 * --------------------------------------------------------
 */
CFE_Status_t HS_SysMonGetCpuUtilization(void)
{
    CFE_Status_t StatusCode = CFE_PSP_ERROR_NOT_IMPLEMENTED;

    return StatusCode;
}
