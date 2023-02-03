#include <stdio.h>
float x[]={5,16,22,3.5,15};float y[5];
int i;
int main() {

    for(i=0;i<6;i++){

        y[i]=5*x[i]*x[i]+3*x[i]+2;
        printf("y(%.2f)=%.2f\n",x[i],y[i]);

    }

    return 0;
}
