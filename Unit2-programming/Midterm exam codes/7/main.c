#include<stdio.h>

void main(){

    static int sum=0,i=1;
    if(i<=100){
    sum+=i;
    i++;
    main();}
    else
        printf("The sum from 1 to 100= %d",sum);

}
