#include<stdio.h>

int main(){
    int num;
    printf("please enter a num:\n");
    scanf("%d",&num);
    // for(int i=1;i<=100;i++){
    //     if(i % num == 0){
    //         printf("num %d is divided by %d\n",i,num);
    //     }
    // }

    //another solution
    int mult = num;
    for(int i=1; mult<100 ;i++){
        mult = i * num;
        printf("num %d is divided by %d\n",mult,num);
    }
}