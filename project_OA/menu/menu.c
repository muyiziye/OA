/*************************************************************************
	> File Name: menu.c
	> Author: muyiziye
	> Mail: ahfyly@foxmail.com
	> Created Time: 2015年11月23日 星期一 20时47分20秒
 ************************************************************************/

#include<stdio.h>
#include"menu.h"

#include "../functionctrl/structControl.h"
void showMenu(DEILYPAYEARN_T_P head)
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
    system("reset");
	showSelectMenu(head);
    return;
}

void showSelectMenu(DEILYPAYEARN_T_P head)
{
    int num = 0;
	while(1)
	{
        printf("1:add, 2:show, 3:modify, 4:select, 5:exit\n");    
	    printf("pls input yours choice\n");
        scanf("%d", &num);
    	enterFunction(head, num);
	}
}
void enterFunction(DEILYPAYEARN_T_P head, int num)
{
	switch(num)
	{
    case 1:
		insertNode(head);
		break;
	case 2:
		showAllNode(head);
		break;
	case 3:
        modifyNode(head);
		break;
	case 4:
		break;
	case 5:
        exit(0);
		break;
	default:
		printf("pls input a true num\n");
		break;
	}
}
