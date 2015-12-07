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
    system("reset");
	showSelectMenu();
    return;
}

void showSelectMenu()
{
    int num = 0;
	printf("1:add, 2:delete, 3:modify, 4:select\n");    
	printf("pls input yours choice\n");
    scanf("%d", &num);
	enterFunction(num);
}

void enterFunction(int num)
{
    switch(num)
	{
	    case 1:

			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			    printf("pls input a true num\n");
			break;
	}
}
