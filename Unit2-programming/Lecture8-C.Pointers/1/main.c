#include<stdio.h>

int main(){

    int m=29;
    int* ab;

    printf("Address of m:%x\n",&m);
    printf("Value of m:%d\n\n",m);

    ab=&m;
    printf("Now, ab is assigned with the address of m\n");
    printf("Address of pointer ab:%x\n",&ab);
    printf("Content of pointer ab:%d\n\n",*ab);

    m=34;
    printf("The value of m assigned to 34 now\n");
    printf("Address of pointer ab: %x\n",&ab);
    printf("Content of pointer ab:%d\n",*ab);

    return 0;
}
