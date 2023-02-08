#include"stdio.h"
#include"math.h"
void main(){
    int n,i;
    printf("enter the number:");
    scanf("%d",&n);
    i=checkpower(n);
    (i==1)?printf("This number is power of 3"):printf("This number is not a power of 3");
}

int checkpower(int n){

    double i=log(n)/log(3);
    return (i==trunc(i));


}
