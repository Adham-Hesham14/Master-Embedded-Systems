/*
 * main.c
 *
 *  Created on: 18 Nov 2022
 *      Author: Adham
 */
#include<stdio.h>

float x,y;
void main(){

	printf("Enter two numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f%f",&x,&y);
	printf("profuct:%f",x*y);
}
