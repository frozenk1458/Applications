/************************/
/***                  ***/
/*** Author : Frozenk ***/
/***                  ***/
/************************/

#include <stdio.h>
#include <stdlib.h>
#include "display.h"
#include "menu.h"

int test(char c)
{
	int ok= 0;
	if(c=='q' || c=='Q')
	{
		ok=1;
	}
	return(ok);
}