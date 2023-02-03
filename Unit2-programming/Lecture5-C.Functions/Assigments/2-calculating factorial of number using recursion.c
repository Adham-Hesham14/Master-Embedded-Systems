#include<stdio.h>
void main(){
int n;
printf("Please enter the factorial number: ");
scanf("%d",&n);
factorial(n);
printf("Factorial(%d)= %d",n,factorial(n));

}

int factorial(int n){
int fact=n;
if(n>1){
    n--;
    fact*=factorial(n);

}


return fact;}
