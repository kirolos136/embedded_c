#include<stdio.h>
#include "sort/sort.h"
#include<stdlib.h>

int* count_freq(int* arr , int size){
    int i=0;
    int j;
    int* freq = (int *) calloc(size ,sizeof(int)); 
    while(i < size){
        j = i+1;
        freq[i] = 1;
        while(j < size && arr[i] == arr[j]){
            j++;
            freq[i]++;
        }
        i = j;
    }
    return freq;
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

    int* freq = count_freq(arr,size);

    for(int i=0;i<size;i++){
        if(freq[i] != 0){
            printf("%d is repeated %d times\n",arr[i],freq[i]);
        }
    }
    

    free(arr);
    free(freq);
}