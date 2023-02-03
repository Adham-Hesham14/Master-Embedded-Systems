#include<stdio.h>
#include<string.h>
int n;
int factorial(n);

int main(){

printf("please enter the factorial number: ");
scanf("%d",&n);
printf("Factorial(%d)=%d",n,factorial(n));
return 0;}
int factorial(n){
int i;
int fact=1;
for(i=n;i>0;i--)
    fact*=i;

return fact;


}
