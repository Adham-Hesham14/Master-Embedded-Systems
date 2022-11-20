/*
 * main.c
 *
 *  Created on: 18 Nov 2022
 *      Author: Adham
 */
#include<stdio.h>

int x=0;
void main(){

	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("You entered %d",x);
}
