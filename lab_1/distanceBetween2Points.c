#include<stdio.h>
#include<math.h>

float distance(float* p_x1,float* p_y1,float* p_x2,float* p_y2){
    float diffX = (*p_x1) - (*p_x2);
    float diffY = (*p_y1) - (*p_y2);
    return sqrt(diffX * diffX + diffY * diffY);
}

int main(){
    float x1,y1,x2,y2;

    printf("please enter x1:\n");
    scanf("%f",&x1);
    printf("please enter y1:\n");
    scanf("%f",&y1);
    printf("please enter x2:\n");
    scanf("%f",&x2);
    printf("please enter y2:\n");
    scanf("%f",&y2);

    float dist = distance(&x1,&y1,&x2,&y2);

    printf("The distance between the 2 points is %f", dist);
}