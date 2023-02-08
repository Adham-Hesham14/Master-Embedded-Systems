#include<stdio.h>
#include<math.h>
void main(){

    int i=1;
    float res,in;
    s:
    printf("Input number: ");
    scanf("%f",&in);
    res=sqrt(in);
    printf("Output: %.2f\n",res);
    i++;
    if(i<=2)
        goto s;


}
