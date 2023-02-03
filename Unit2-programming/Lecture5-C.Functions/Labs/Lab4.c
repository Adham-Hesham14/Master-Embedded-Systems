#include<stdio.h>
int i;
void printarr(int arr[],int n);
void main(){
int arr[9]={1,2,3,4,5,6,7,8,9};
for(i=0;i<9;i++){

    printarr(&arr[i],9-i);
}

}

void printarr(int arr[],int n){
int i;
for(i=0;i<n;i++)
    printf("%d ",arr[i]);
printf("\n");
}
