#include<stdio.h>

int main(){
    int total_sec,hours,min,sec;
    printf("please enter the number of seconds:\n");
    scanf("%d",&total_sec);
    
    hours = total_sec / 60;

    total_sec = total_sec % 60;

    min = total_sec / 60;

    sec = total_sec % 60;

    printf("hours:%d min:%d sec:%d",hours,min,sec);
}