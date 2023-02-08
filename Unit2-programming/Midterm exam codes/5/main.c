#include<stdio.h>

void main(){
    int n,res,counter=0,i=1;
    s:
    printf("Input: ");
    scanf("%d",&n);
    res=n;
    while(res!=0){

    if(res%2!=0)
        counter++;
        res/=2;
    }

    printf("number of ones in the binary number: %d\n",counter);
    counter=0;
    i++;
    if(i<=2)
        goto s;


}
