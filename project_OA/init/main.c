/*************************************************************************
	> File Name: main.c
	> Author: muyiziye
	> Mail: ahfyly@foxmail.com
	> Created Time: 2015年11月23日 星期一 20时20分37秒
 ************************************************************************/

#include<stdio.h>

#ifndef MENU_H
#include"menu.h"
#endif
#include "../define/structDef.h"
#include "../functionctrl/structControl.h"

int main()
{
    DEILYPAYEARN_T_P head;
	head = createHead();
    showMenu(head);
    return 1;
}
