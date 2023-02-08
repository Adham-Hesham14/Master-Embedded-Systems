#include<stdio.h>

void main(){

    int arr[5],i=0,x;
    s:
    printf("Entering the elements of the array:");
    for(i=0;i<5;i++){
        printf("Enter the element:");
        scanf("%d",&arr[i]);}
    printf("The array in reverse order: ");
    for(i=4;i>=0;i--)
        printf("%d ",arr[i]);

    }
