#include  <stdio.h>
char x;

int main(void)
{

   printf("enter an alphabet: ");
   fflush(stdin);fflush(stdout);
   scanf("%c",&x);
   if(x=='a'||x=='e'||x=='i'||x=='o'  ||x=='u') printf("%c is a vowel",x);
   else printf("%c is a consonant",x);

    return 0;
}

