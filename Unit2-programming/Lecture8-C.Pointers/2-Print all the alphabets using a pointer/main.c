#include<stdio.h>
int main(){

    char alph[27],i,*p=alph;

    for(i=0;i<26;i++){

    *p=i+'A';
    printf("%c ",*p);
    p++;
    }

    return 0;
}
