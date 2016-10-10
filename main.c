/************************/
/***                  ***/
/*** Author : Frozenk ***/
/***                  ***/
/************************/

#include <stdlib.h>
#include <stdio.h>
#include "display.h"
#include "menu.h"
#include "welcome.h"

int main()
{
	system("cls");
	welcome();
	printf("\nSystem loading\n");
	sleep(3);
	system("cls");
	menu();
	printf("\n");
	return(EXIT_SUCCESS);
}