#include<stdio.h>
#include<math.h>
void prime(int n1,int n2);
void main(){

    int i=1,n1,n2;
    printf("n1:");
    scanf("%d",&n1);
    printf("n2:");
    scanf("%d",&n2);
    printf("Prime numbers:");
    prime(n1,n2);
}
void prime(int n1,int n2){
    int i,j,counter=0;
    for(i=n1;i<n2;i++){
        for(j=2;j<=i/2;j++){

            if(i==j)
                continue;
            if(i%j==0)
                counter++;

        }
        if(counter==0)
            printf("%d ",i);
        counter=0;
    }



}
