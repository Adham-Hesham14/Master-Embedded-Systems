#include <stdio.h>
int i,j;

float x[3][3],y[3][3];
int main() {

for(i=0;i<=2;i++){
    for(j=0;j<=2;j++){
        printf("Enter the item(%d, %d): ",i,j);
        scanf("%f",&x[i][j]);
        y[i][j]=x[j][i];
    }
    }
    for(i=0;i<=2;i++){
    for(j=0;j<=2;j++){
        y[i][j]=x[j][i];}}
    for(i=0;i<=2;i++){
    for(j=0;j<=2;j++){
        printf("%2.2f\t",y[i][j]);
    }printf("\n");
}

    return 0;
}
