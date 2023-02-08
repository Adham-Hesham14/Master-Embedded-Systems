#include<stdio.h>

void main(){

    int in,sum,i=1;
    s:
    printf("Input number: ");
    scanf("%d",&in);
    sum=0;
    while((in%10)!=0){

        sum+=in%10;
        in/=10;
    }
     printf("Output= %d\n",sum);
     i++;
     if(i<=2)
        goto s;

}
