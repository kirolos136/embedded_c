#include<stdio.h>
#include<string.h>

int main(){
    char p[100];

    printf("please enter a sentence less than 100 chars:");
    scanf("%99[^\n]", p);
    /*to take a string and stops at enter (also add null terminator)
        99 to limit for 100 char leaving one for null terminator*/

    int count = 0;
    char* token = strtok(p ," ");
    while(token != NULL){
        count++;
        printf("word num %d is %s\n",count,token);
        token = strtok(NULL," ");
    }

    printf("the count of words is:%d",count);
}
