/*
 * App.c
 *
 * Created: 8/12/2023 3:34:43 PM
 * Author : Mohamed Osama
 */ 

#include "App.h"	

int main(void)
{
	Application_initialize();
    while (1) 
    {
	Timer_App();
	}
}

void Application_initialize(void){
	PORT_Init();
}