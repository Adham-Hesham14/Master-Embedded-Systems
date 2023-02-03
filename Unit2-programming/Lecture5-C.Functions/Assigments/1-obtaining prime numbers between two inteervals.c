#include<stdio.h>





int checkprime(int n){
int flag=0,i;
for(i=2;i<=n/2;i++){
    if(n==1){
        flag++;
        break;
    if(n==i)
        continue;
    }//end of if condition
    if(n%i==0){
        flag++;
        break;
    }//end of if condition

}//end of outer for loop


return flag;
}//end of the function

int main(){
int start,finish,i,flag;
printf("Enter two number intervals: ");
scanf("%d%d",&start,&finish);
printf("Prime numbers are: ");

for(i=start+1;i<finish;i++){

    flag=checkprime(i);
    if(flag==0)
    printf("%d ",i);
}

return 0;
}


