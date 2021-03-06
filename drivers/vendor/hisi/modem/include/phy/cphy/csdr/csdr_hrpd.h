/** ****************************************************************************

                    Huawei Technologies Sweden AB (C), 2001-2015

 ********************************************************************************
 * @author    Automatically generated by DAISY
 * @version
 * @date      2015-08-27
 * @file
 * @brief
 * Common data type definitions for CPROC_HRPD_SearchMeasurer and
 * CPROC_HRPD_ChannelManager.
 * @copyright Huawei Technologies Sweden AB
 *******************************************************************************/
#ifndef CSDR_HRPD_H
#define CSDR_HRPD_H

/*******************************************************************************
 1. Other files included
*******************************************************************************/

#include "uphy_type_define.h"

#ifdef __cplusplus
#if __cplusplus
    extern "C" {
#endif /* __cpluscplus */
#endif /* __cpluscplus */
#pragma pack(4)

/*******************************************************************************
 2. Macro definitions
*******************************************************************************/


/*******************************************************************************
 3. Enumerations declarations
*******************************************************************************/

/** ****************************************************************************
 * Name        : CSDR_HRPD_BOOL_ENUM_UINT16
 *
 * Description :
 *******************************************************************************/
enum CSDR_HRPD_BOOL_ENUM
{
    CSDR_HRPD_BOOL_FALSE                = 0x0000,
    CSDR_HRPD_BOOL_TRUE                 = 0x0001,
    CSDR_HRPD_BOOL_BUTT                 = 0x0002
};
typedef PHY_UINT16 CSDR_HRPD_BOOL_ENUM_UINT16;

/** ****************************************************************************
 * Name        : CSDR_HRPD_CELL_TYPE_ENUM_UINT16
 *
 * Description : This enum is used to identify the type of cell.
 *******************************************************************************/
enum CSDR_HRPD_CELL_TYPE_ENUM
{
    CSDR_HRPD_CELL_TYPE_AS              = 0x0000, /**< Active set and not interference cancellation cell */
    CSDR_HRPD_CELL_TYPE_AS_IC           = 0x0001, /**< Active set and ptentially interference cancellation cell */
    CSDR_HRPD_CELL_TYPE_IC              = 0x0002, /**< Not active set and potentially interference cancellation cell */
    CSDR_HRPD_CELL_TYPE_MEAS            = 0x0003, /**< Measurement cell, to be used after pilot search without timing, i.e. when two
candidates exists and the cells shall be measured */
    CSDR_HRPD_CELL_TYPE_BUTT            = 0x0004
};
typedef PHY_UINT16 CSDR_HRPD_CELL_TYPE_ENUM_UINT16;

/*******************************************************************************
 4. Message Header declaration
*******************************************************************************/

/*******************************************************************************
 5. Message declaration
*******************************************************************************/

/*******************************************************************************
 6. STRUCT and UNION declaration
*******************************************************************************/

/** ****************************************************************************
 * Name        : CSDR_HRPD_FREQ_INFO_STRU
 *
 * Description :
 *******************************************************************************/
typedef struct
{
    PHY_UINT16                          uhwBandClass; /**< CDMA band class */
    PHY_UINT16                          uhwFreq;      /**< CDMA frequency */
} CSDR_HRPD_FREQ_INFO_STRU;

/** ****************************************************************************
 * Name        : CSDR_HRPD_MPS_PN_CFG_STRU
 *
 * Description : This struct contains pairs of PNOffset and search window for
 * MPS pilots. The PNOffset tells the PN Offset of the pilot to be measured.
 *
 * The window position is given in base cnt. The reported framePos corresponds
 * to PILOT_PN_PHASE but framePos is reported in base cnt and not normalized to
 * the serving pilot.
 *******************************************************************************/
typedef struct
{
    PHY_UINT16                          uhwPNOffset;       /**< The PN Offset of the pilot to be measured. 0..511, */
    CSDR_HRPD_CELL_TYPE_ENUM_UINT16     enCellType;
    PHY_UINT32                          uwFramePos;        /**< 0-(32768*4-1), 1/4chip in base cnt */
    PHY_UINT32                          uhwWindowPosition; /**< Tail of the search window, unit 1/4 chips in base cnt */
} CSDR_HRPD_MPS_PN_CFG_STRU;

/*******************************************************************************
 7. OTHER declarations
*******************************************************************************/

/*******************************************************************************
 8. Global  declaration
*******************************************************************************/

/*******************************************************************************
 9. Function declarations
*******************************************************************************/

#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cpluscplus */
#endif /* __cpluscplus */

#endif
