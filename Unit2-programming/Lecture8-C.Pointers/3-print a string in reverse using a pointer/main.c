#include<stdio.h>
#include<string.h>
int main(){

    char str[20],*p,i;

    printf("Input string: ");
    gets(str);
    p=str+strlen(str)-1;
    printf("Reversed string: ");
    for(p;p>=str;p--)
        printf("%c",*p);

    return 0;
}
