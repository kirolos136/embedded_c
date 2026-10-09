#include "sort.h"

static void swap(int* arr,int i,int j){
    int temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;
}

static void sortAsc(int* arr , int size){
    for(int i=0;i<size-1;i++){
        int swaps = 0;
        for(int j=0;j<size-1-i;j++){
            if(arr[j+1] < arr[j]){
                swap(arr,j,j+1);
                swaps++;
            }
        }
        if(!swaps) return;
    }
}

static void sortDesc(int* arr , int size){
    for(int i=0;i<size-1;i++){
        int swaps = 0;
        for(int j=0;j<size-1-i;j++){
            if(arr[j+1] > arr[j]){
                swap(arr,j,j+1);
                swaps++;
            }
        }
        if(!swaps) return;
    }
}

void sort(int* arr , int size,order o){
    if(o == SORT_ASC){
        sortAsc(arr,size);
    }else if(o == SORT_DESC){
        sortDesc(arr,size);
    }
}