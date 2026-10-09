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

    for(int i=n-1 ;i > -1;i--){
        printf("%d ",arr[i]);
    }
    
    free(arr);
}