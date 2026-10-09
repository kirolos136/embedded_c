#ifndef SORT_H
#define SORT_H

typedef enum{
    SORT_ASC,
    SORT_DESC
} order;

void sort(int* arr , int size,order o);

#endif