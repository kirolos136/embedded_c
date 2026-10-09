#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main(){
    int size;
    printf("please enter the size:");
    scanf("%d",&size);

    int* arr = (int *) malloc(size * sizeof(int));

    for(int i=0;i<size;i++){
        printf("enter number %d:",i+1);
        scanf("%d",&arr[i]);
    }

    int maximum = INT_MIN;
    int minimum = INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i]>maximum){
            maximum = arr[i];
        }

        if(arr[i] < minimum){
            minimum = arr[i];
        }
    }

    printf("the max num is %d and the min num is %d",maximum,minimum);

    free(arr);
}