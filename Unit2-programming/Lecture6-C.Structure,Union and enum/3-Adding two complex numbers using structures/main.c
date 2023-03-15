#include<stdio.h>
struct Snum
{

    float real;
    float img;

};
struct Snum add(struct Snum number1,struct Snum number2){

    struct Snum res;
    res.real=number1.real+number2.real;
    res.img=number1.img+number2.img;
    return res;
}


void main()
{
    struct Snum number1,number2,res;
    printf("for the first complex number\n");
    printf("Enter real and imaginary respectively(2,-3): ");
    scanf("%f,%f",&number1.real,&number1.img);
    printf("for the second complex number\n");
    printf("Enter real and imaginary respectively(2,-3): ");
    scanf("%f,%f",&number2.real,&number2.img);
    res=add(number1,number2);
    printf("sum=%.3f+%.3fi",res.real,res.img);
}
