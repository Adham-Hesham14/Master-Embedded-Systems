/*
 * main.c
 *
 *  Created on: 18 Nov 2022
 *      Author: Adham
 */
#include<stdio.h>

float a,b,c;
void main(){

	printf("Enter the value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter the value of b: ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&b);
		c=a;
		a=b;
		b=c;
	printf("after swapping, value of a=%.1f\nafter swapping, value of b=%.1f",a,b);
}
