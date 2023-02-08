#include<stdio.h>

void main(){
    int n,b;
    int clearfun(int n, int b);
    printf("Input number: ");
    scanf("%d",&n);
    printf("Bit position: ");
    scanf("%d",&b);
    printf("result is: %d",clearfun(n,b));

}

int clearfun(int n, int b){

    n&=(~(1<<b));


    return n;}
