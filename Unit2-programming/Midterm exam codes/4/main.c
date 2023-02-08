#include<stdio.h>

void rev(char n);
void main(){
    int i=1;
    char n;
    s:
    printf("\nInput: ");

    rev(n);
    if(i<=2)
        goto s;
}

void rev(char n){

    scanf("%c",&n);
    if(n!='\n'){
       rev(n);
       printf("%c",n);

    }
}
