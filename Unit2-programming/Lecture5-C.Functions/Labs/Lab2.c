#include<stdio.h>
int calcmin(int values[],int n);
int main(){

int arr1[10]={35,67,27,54,76,44,59,32,43,25};
int arr2[5]={28,71,67,83,62};
int arr3[13]={87,21,74,36,27,64,87,63,27,86,48,32,76};

printf("Minimum value of array1=%d\n",calcmin(arr1,sizeof(arr1)/4));
printf("Minimum value of array2=%d\n",calcmin(arr2,sizeof(arr2)/4));
printf("Minimum value of array3=%d\n",calcmin(arr3,sizeof(arr3)/4));
}

int calcmin(int values[],int n){
int minvalue=values[0];
int i;
for(i=0;i<n;i++){
    if(minvalue>=values[i])
        minvalue=values[i];

}
return minvalue;

}
