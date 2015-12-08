/*************************************************************************
	> File Name: structControl.c
	> Author: muyiziye
	> Mail: 348610826@qq.com 
	> Created Time: Mon 07 Dec 2015 10:30:31 AM CST
 ************************************************************************/
#include"structControl.h"
#include"io.h"

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
	addData(node);
	node->next = head->next;
	head->next = node;
}

void modifyNode(DEILYPAYEARN_T_P head)
{
    int day;
    DEILYPAYEARN_T_P tmp;
    tmp = (DEILYPAYEARN_T_P)malloc(sizeof(DEILYPAYEARN_T));
    tmp = head;
    printf("pls input the day\n");
    scanf("%d", &day);
    while(NULL != tmp->next)
    {
        if(day == tmp->day)
        {
            addData(tmp);
        }
        tmp = tmp->next;
    }
}
