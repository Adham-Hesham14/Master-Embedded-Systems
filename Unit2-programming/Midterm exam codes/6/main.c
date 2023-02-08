#include<stdio.h>
int counter=0;
int check(int i,int arr[],int n);
void main(){
    int n,arr[10],x=1,i,j;
    s:
    printf("\nEnter the size of the array: ");
    scanf("%d",&n);
    printf("Entering the elements of the array: ");
    for(i=0;i<n;i++){
    printf("Enter an element:");
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
         check(i,arr,n);
         if(counter==1)
            printf("The unique number is:%d",arr[i]);
            counter=0;
    }

    x++;
    if(x<=2)
        goto s;

}
int check(int i,int arr[],int n){
    static int j=0;
    if(j<n){
        if(arr[i]==arr[j])
            counter++;
        j++;
        check(i,arr,n);
        j=0;
    }

}
