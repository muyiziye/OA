/*************************************************************************
	> File Name: menu.c
	> Author: muyiziye
	> Mail: ahfyly@foxmail.com
	> Created Time: 2015年11月23日 星期一 20时47分20秒
 ************************************************************************/

#include<stdio.h>
#include"menu.h"
#include "../define/structDef.h"
#include "../functionctrl/structControl.h"

void showMenu()
{
    // this function can clear screen
    system("clear");
printf("/******************************************************************************/\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("                                this is my OA\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
printf("/******************************************************************************/\n");
    printf("pls input \'Enter\' to transfer other window\n");
    getchar();
    // this function can clear screen 
    system("clear");
    system("reset");
    DEILYPAYEARN_T_P head;
	head = createHead();
	insertNode(head);
    return;
}
