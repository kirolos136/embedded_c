#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;

    printf("please enter a letter: ");
    scanf("%c", &ch);

    if(!isalpha(ch)){
        printf("%c isn't a letter\n",ch);
        return 1;
    }

    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("vowel\n");
    } else {
        printf("consonant\n");
    }
}