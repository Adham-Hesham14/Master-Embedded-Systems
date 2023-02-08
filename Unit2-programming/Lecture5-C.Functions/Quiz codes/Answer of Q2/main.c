#include<stdio.h>

void main(){
    int i;
    float arr1[10],arr2[10],swap[10];
    printf("for the first array\n");

    for(i=0;i<10;i++){

        printf("Enter the element %d: ",i+1);
        scanf("%f",&arr1[i]);
    }
    printf("for the second array\n");

    for(i=0;i<5;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%f",&arr2[i]);
    }

    for(i=0;i<10;i++){

        swap[i]=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=swap[i];
    }
    printf("Arrays after swapping\n");
    printf("First array:");
    for(i=0;i<10;i++){
        printf("%.2f ",arr1[i]);

    }
     printf("\nsecond array:");
    for(i=0;i<10;i++){
        printf("%.2f ",arr2[i]);

    }
    }
