#include<stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    /*note that we must seed it 
    as rand() itself is a determined func 
    but when we seed it with current time 
    it changes values*/

    srand(time(NULL)); 

    int rand_num = rand() % 100 + 1; // note rand() alone produce from 0 to a large number (RAND_MAX)
    int entered_num;
    printf("guess a num between 1 and 100\n");
    while(scanf("%d",&entered_num) != 1 || entered_num >100 || entered_num < 1){
        printf("please enter a valid num: ");
        int c;
        while((c = getchar() != '\n') && c != EOF);
    }

    if(entered_num == rand_num){
        printf("your guessed num is true\n");
    }else{
        printf("your guess isn't true , the num is %d",rand_num);
    }

}