#include<stdio.h>

int main(){
    char str1[50];
    char str2[50];

    printf("please enter a string less than 50 chars:");
    scanf("%s",str1);

    int i = 0;
    while(str1[i] != '\0'){
        str2[i] = str1[i];
        i++;
    }

    str2[i] = '\0';

    printf("This is from the second string : %s" , str2);
}