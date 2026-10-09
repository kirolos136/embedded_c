#include<stdio.h>
#include "sort/sort.h"
#include<stdlib.h>

int count_duplicates(int* arr , int size){
    int i=0;
    int j;
    int dup = 0;
    while(i < size){
        j = i+1;
        while(j < size && arr[i] == arr[j]){
            j++;
            dup++;
        }
        i = j;
    }
    return dup;
}

int main(){
    int size;
    printf("please enter the num of elements:");
    scanf("%d",&size);

    int* arr = (int *) malloc(sizeof(int) * size);
    for(int i=0;i<size;i++){
        printf("please enter number %d :",i+1);
        scanf("%d",&arr[i]);
    }

    int duplicates = count_duplicates(arr,size);

    printf("the number of duplicates is :%d",duplicates);

    free(arr);
}