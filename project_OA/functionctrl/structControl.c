/*************************************************************************
	> File Name: structControl.c
	> Author: muyiziye
	> Mail: 348610826@qq.com 
	> Created Time: Mon 07 Dec 2015 10:30:31 AM CST
 ************************************************************************/
#include"structControl.h"

DEILYPAYEARN_T_P createHead()
{
    DEILYPAYEARN_T_P HEAD;
	HEAD = (DEILYPAYEARN_T_P)malloc(sizeof(DEILYPAYEARN_T));
	HEAD->next = NULL;
	return HEAD;
}

void insertNode(DEILYPAYEARN_T_P head)
{
    DEILYPAYEARN_T_P node;
	node = (DEILYPAYEARN_T_P)malloc(sizeof(DEILYPAYEARN_T));
	node->next = NULL;
	head->next = node;
}

