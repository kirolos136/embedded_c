#include<stdio.h>

int main(){
    int start , end;

    //taking input and handling edge cases
    printf("please enter the start of the range:\n");

    //if user didn't enter a num
    if(scanf("%d",&start) != 1){
        printf("wrong value please enter a num\n");
        return 1;
    }

    printf("please enter the end of the range:\n");

    //if user didn't enter a num
    if(scanf("%d",&end) != 1){
        printf("wrong value please enter a num\n");
        return 1;
    }
    
    if(start > end){
        printf("please enter a valid range\n");
        return 1;
    }

    for(int i=start;i<=end;i++){
        if(i % 2 == 0 ){
            printf("%d is even\n",i);
        }else{
            printf("%d is odd\n",i);
        }
    }
}