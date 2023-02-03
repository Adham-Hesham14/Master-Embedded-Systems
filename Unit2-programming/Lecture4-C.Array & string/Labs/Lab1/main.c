#include <stdio.h>
float x[10];int i;
int main() {
    for(i=0;i<10;i++){
    printf("Please enter the student degree: ");
fflush(stdin); fflush(stdout);
    scanf("%f",&x[i]);
}
for(i=0;i<10;i++){
    printf("the degree of student no.%d is: %.2f\n",i,x[i]);

}
    return 0;
}
