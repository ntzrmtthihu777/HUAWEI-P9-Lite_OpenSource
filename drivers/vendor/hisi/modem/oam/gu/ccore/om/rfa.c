


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
    协议栈打印打点方式下的.C文件宏定义
*****************************************************************************/
#define    THIS_FILE_ID        PS_FILE_ID_RFA_C


/*****************************************************************************
  1 头文件包含
*****************************************************************************/
#include "rfa.h"



/*****************************************************************************
 函 数 名  : RFA_MsgProc
 功能描述  : RFA模块的消息处理函数
 输入参数  : pMsg  消息块


 输出参数  : 无
 返 回 值  : 成功，失败
 调用函数  :
 被调函数  :

 修改历史  :

*****************************************************************************/
VOS_UINT32 RFA_MsgProc(MsgBlock *pMsg)
{
    return VOS_OK;
}


/*****************************************************************************
 函 数 名  : WuepsRfaPidInit
 功能描述  :
 输入参数  : 无


 输出参数  : 无
 返 回 值  :
 调用函数  :
 被调函数  :

 修改历史  :

*****************************************************************************/
VOS_UINT32 WuepsRfaPidInit ( enum VOS_INIT_PHASE_DEFINE ip )
{
    return VOS_OK;
}
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

