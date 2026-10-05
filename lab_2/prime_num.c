#include<stdio.h>
#include<stdbool.h>

int main(){
    int num;
    printf("please enter a positive number:\n");

    while(scanf("%d",&num) != 1 || num < 1){
        printf("please enter a valid number:\n");
        int c;
        while(((c = getchar()) != '\n') && c !=EOF);
    }
    
    bool prime = true;
    for(int i=2 ; i<num ; i++){
        if(num % i == 0){
            prime = false;
            break;
        }
    }

    prime ? printf("number is prime") : printf("number isn't prime");
}