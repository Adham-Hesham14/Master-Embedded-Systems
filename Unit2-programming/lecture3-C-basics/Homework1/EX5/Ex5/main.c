/*
 * main.c
 *
 *  Created on: 18 Nov 2022
 *      Author: Adham
 */
#include<stdio.h>

char c;
void main(){

	printf("Enter a character:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	printf("ASCII value of %c is :%d",c,c);
}
