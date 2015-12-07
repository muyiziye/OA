/*************************************************************************
	> File Name: structControl.h
	> Author: muyiziye
	> Mail: ahfyly@foxmail.com
	> Created Time: 2015年11月24日 星期二 23时22分03秒
 ************************************************************************/

#ifndef _STRUCTCONTROL_H
#define _STRUCTCONTROL_H

#ifndef _STRUCTDEF_H
#include"structDef.h"
#endif
#include <stdio.h>
#include <stdlib.h>

// This function will create a head point of DEILYPAYEARN_T
DEILYPAYEARN_T_P createHead();

// This function will insert a Node to linkList
void insertNode(DEILYPAYEARN_T_P head);

// This function will modify a Node 
void modifyNode();
#endif
