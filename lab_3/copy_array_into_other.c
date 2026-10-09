#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("please enter the size:");
    scanf("%d",&n);

    int* arr = (int *) malloc(n * sizeof(int));
    int temp;
    for(int i=0; i<n;i++){
        printf("enter number %d:",i+1);
        scanf("%d",&arr[i]);
    }

    int* arr2 = (int *) malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        arr2[i] = arr[i];
    }

    printf("The numbers from copied array:");
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }

    free(arr);
    free(arr2);
}