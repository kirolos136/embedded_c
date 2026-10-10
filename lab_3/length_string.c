#include<stdio.h>

int main(){
    char str[50];
    printf("please enter a string less than 49 char:");
    scanf("%s",str);

    int length = 0;
    while(str[length] != '\0'){
        length++;
    }

    printf("The Length of the string is: %d",length);
}