#include<stdio.h>

int lastoccurence(int arr[], int n, int x);
void main(){

    int arr[10],i,location,x,n;
    printf("please enter the size of the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
       printf("Enter the element: ");
       scanf("%d",&arr[i]);
    }

    printf("Enter the number you want to get it's last occurence: ");
    scanf("%d",&x);
    location= lastoccurence(arr,n,x);
    (location>0)?printf("last occurence is: %d",location):printf("This number doesn't exist in the array");
}

int lastoccurence(int arr[], int n, int x){
    int i;
    for(i=n-1;i>=0;i--){

        if(x==arr[i])
            break;
        }

    return i+1;
}
