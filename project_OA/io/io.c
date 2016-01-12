/*************************************************************************
	> File Name: io.c
	> Author: muyiziye
	> Mail: 348610826@qq.com 
	> Created Time: Mon 07 Dec 2015 03:30:54 PM CST
 ************************************************************************/
#include <stdio.h>
#include "io.h"

void addData(DEILYPAYEARN_T_P node)
{
    printf("pls input the day(ag.150101)\n");
	scanf("%d", &node->day);
	printf("pls input the breakFaseFee(ag.12.3)\n");
	scanf("%f", &node->breakFastFee);
	printf("pls input the lunchFee\n");
	scanf("%f", &node->lunchFee);
	printf("pls input the dinnerFee\n");
	scanf("%f", &node->dinnerFee);
	printf("pls input the shoppingFee\n");
	scanf("%f", &node->shoppingFee);
	printf("pls input the otherFee\n");
	scanf("%f", &node->otherFee);
	printf("pls input the wage\n");
	scanf("%f", &node->wage);
	printf("pls input the otherEarn\n");
	scanf("%f", &node->otherEarn);
}

void showData(DEILYPAYEARN_T_P node)
{
	printf("day:%d, breakFast:%.1f, lunch:%.1f, dinner:%.1f, shopping:%.1f, otherfee:%.1f, wage:%.1f, otherearn:%.1f\n",node->day, 
			node->breakFastFee, node->lunchFee, node->dinnerFee, node->shoppingFee, node->otherFee, node->wage, node->otherEarn);
}
