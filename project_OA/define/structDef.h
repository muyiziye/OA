/*************************************************************************
	> File Name: structDef.h
	> Author: muyiziye
	> Mail: ahfyly@foxmail.com
	> Created Time: 2015年11月23日 星期一 22时02分18秒
 ************************************************************************/

#ifndef _STRUCTDEF_H
#define _STRUCTDEF_H
typedef struct deilypayearn
{
    int day;
    float breakFaseFee;
    float lunchFee;
    float dinnerFee;
    float shoppingFee;
    float otherFee;
    float wage;
    float otherEarn;
	struct deilypayearn* next;
}DEILYPAYEARN_T, *DEILYPAYEARN_T_P;

#endif

