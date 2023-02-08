#include<stdio.h>

void main(){
char str[20],name[20];
printf("Enter a string:");
gets(str);
printf("\nEnter your name:");
gets(name);

(stricmp(str,name)==0)?printf("Identical"):printf("Different");

}
