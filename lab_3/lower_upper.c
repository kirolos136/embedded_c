#include<stdio.h>

int main(){
    char str[200];
    printf("please enter a sentence:");
    fgets(str, sizeof(str), stdin);

    printf("string before change :%s\n",str);

    int i = 0;
    int offset = 'a' - 'A';
    while(str[i] != '\0'){
        if(str[i] > 'A' && str[i] < 'Z'){
            str[i]+= offset;
        }else if(str[i] > 'a' && str[i] < 'z'){
            str[i] -= offset;
        }
        i++;
    }

    printf("string after change :%s\n",str);
}