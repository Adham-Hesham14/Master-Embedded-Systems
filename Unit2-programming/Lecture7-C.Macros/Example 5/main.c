#include<stdio.h>
#define PI 22/7
#define calc(radius) printf("The area=%.3f",PI*radius*radius);

int main(){

    float r;
    printf("Enter the radius: ");
    scanf("%f",&r);
    calc(r);

    return 0;
}
