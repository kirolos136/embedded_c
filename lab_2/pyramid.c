#include<stdio.h>

int main(){
    int width;
    printf("please enter an odd num:\n");
    while(scanf("%d",&width) != 1 || (width % 2 == 0)){
        printf("please enter an odd num:\n");
        int c;
        while((c = getchar() != '\n') && c != EOF );
    }

    int length = width/2 + 1;

    for(int i=length-1; i>=0 ; i--){
        for(int j=0;j<width;j++){
            if((j < i) || (j >= width - i)){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
}