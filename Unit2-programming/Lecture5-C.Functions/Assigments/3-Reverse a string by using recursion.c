#include<stdio.h>
void sentencerev(char sentence[],int length,int i);
void main(){
    char str[50];
    int length,i=-1;
    printf("Please enter the string: ");
    gets(str);
    printf("Reversed sentence: ");
    length=strlen(str)-1;
    sentencerev(str,length,i);

}
void sentencerev(char sentence[],int length, int i){

    i++;
    if(i<=length){

        sentencerev(sentence,length,i);
        printf("%c",sentence[i]);
    }




}
