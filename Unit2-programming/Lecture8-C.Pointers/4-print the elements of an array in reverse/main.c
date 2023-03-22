#include<stdio.h>
int main(){

    int n,arr[15],i, *p;
    printf("Enter the number of array elements(max:15):");
    scanf("%d",&n);
    for(i=0;i<n;i++){

        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }

    printf("Array elements in the reverse order: ");

    for(p=arr+n-1;p>=arr;p--)
        printf("%d ", *p);

    return 0;
}
