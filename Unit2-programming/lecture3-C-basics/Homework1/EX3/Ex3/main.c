/*
 * main.c
 *
 *  Created on: 18 Nov 2022
 *      Author: Adham
 */
#include<stdio.h>

int x,y;
void main(){

	printf("Enter two integers: ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&x,&y);
	printf("Sum:%d",x+y);
}
