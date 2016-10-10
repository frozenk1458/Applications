#include <stdlib.h>
/************************/
/***                  ***/
/*** Author : Frozenk ***/
/***                  ***/
/************************/

#include <stdio.h>
#include "main.h"

void menu()
{
	char choice = ' ';
	choice = ' ';
	printf("\nYou are in the menu section but it is still under construction \n");
	printf("\nPlease wait until finished. Thanks for your patience\n");
	
	printf("\nQ. Quit the program\n");
	printf("\n1. Display a number\n");
	
	printf("\n Please tap your choice among the menu choices\n");
	scanf("%c",&choice);
	if(choice == 'q' || choice == 'Q')
	{
		return;
	}
	if(choice == '1')
	{
		system("cls");
		display();
	}
}