#include<stdio.h>

int reverse(int x[],int y);
void main(){
    int a[20],b[20],n,i;
    printf("please enter the size of an array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the element: ");
        scanf("%d",&a[i]);
    }
    reverse(a,n);
}

int reverse(int x[],int y){
    int i;
    int b[20];
    for(i=0;i<y;i++)
        b[i]=x[y-i-1];

    for(i=0;i<y;i++)
            printf("%d ",b[i]);
}
