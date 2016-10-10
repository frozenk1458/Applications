/************************/
/***                  ***/
/*** Author : Frozenk ***/
/***                  ***/
/************************/

#include <stdlib.h>
#include <stdio.h>
#include "menu.h"
#include "testDisp.h"

void display()
{
	int d = 0;
	char r=' ';
	printf("\nLa valeur de r est : %c\n",r);
	printf("\nCan you tap a number please.\n");
	scanf("%d",&d);
	printf("\nThe number you entered is : %d\n",d);
	printf("\n\n\n\n\n\n\n");
	printf("\n Tap Q/q when you finish. You can instead tap any key to restart the current program\n");
	printf("\n The current program is : Display  a number\n");
	printf("\nYou can tap now !!! :) \n");
	r=getch();
	int t =0;
	if(t==0)
	{
		system("cls");
		display();
	}
	if(t==1)
	system("pause");
}