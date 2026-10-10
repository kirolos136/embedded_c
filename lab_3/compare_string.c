#include<stdio.h>

int main(){
    //a flag for the deciding eq or not
    char equal = 1;

    char str1[50];
    char str2[50];
    printf("please enter 2 strings with less than 49 chars\n");
    printf("please enter first string:");
    scanf("%s",str1);
    printf("please enter second string:");
    scanf("%s",str2);

    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0'){
        if(str1[i] != str2[i]){
            equal = 0;
            break;
        }
        i++;
    }

    equal ? printf("The two strings are equal") : printf("The two strings aren't equal");

}