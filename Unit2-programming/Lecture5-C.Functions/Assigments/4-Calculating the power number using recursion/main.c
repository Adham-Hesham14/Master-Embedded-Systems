#include<stdio.h>
int calcpower(int base,int power);
void main(){
    int base,power;
    printf("Please enter the base number: ");
    scanf("%d",&base);
    s:
    printf("Please enter the power number(positive integer): ");
    scanf("%d",&power);

    if(power<0){
        printf("Not valid");
        goto s;
    }

    printf("The result will be: ");

    printf("The result is: %d",calcpower(base,power));
}
int calcpower(int base,int power){

    if(power>0){


        return base*calcpower(base,power-1);
    }

else
    return 1;

}
