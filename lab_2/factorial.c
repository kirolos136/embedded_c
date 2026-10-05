#include<stdio.h>

int factorial(int n){
    if(n == 1) return 1;
    return n * factorial(n-1);
}

int main(){
    int num;
    printf("please enter a positive num:");

    //edgecases (if user enters a negative num or characters)
    while(scanf("%d",&num) != 1 || num < 0){
        printf("please enter a valid num:\n");
        int c;
        while((c = getchar()) != '\n' && c != EOF);
    }

    int fact = factorial(num);

    printf("the factorial is %d",fact);
}