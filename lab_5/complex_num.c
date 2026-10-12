#include<stdio.h>

typedef struct complex_num
{
    float x;
    float y;
}complex_num;


void add(struct complex_num* c1,struct complex_num* c2,struct complex_num* result){
    result->x = c1->x + c2->x;
    result->y = c1->y + c2->y;
}

void multiply(struct complex_num* c1,struct complex_num* c2,struct complex_num* result){
    float r = (c1->x * c2->x) - (c1->y * c2->y);
    float i = (c1->x * c2->y) + (c1->y * c2->x);
    result->x = r;
    result->y = i;
}

void print_complex(const complex_num *c) {
    if (c->y >= 0)
        printf("%.2f + %.2fi\n", c->x, c->y);
    else
        printf("%.2f - %.2fi\n", c->x, -c->y);
}

int main(){
    complex_num c1 = {2 ,3};
    complex_num c2 = {4,5};
    complex_num c3;

    add(&c1,&c2,&c3);

    print_complex(&c3); 

    multiply(&c1,&c2,&c3);

    print_complex(&c3);
}