#include"myString.h"

char* strchr(const char* mem , char required){
    if(mem == NULL) return NULL;

    size_t i = 0;
    while(mem[i] != '\0'){

        if(mem[i] == required) return mem + i;
        i++;

    }

    return NULL;
}

void *memchr(const void *s, unsigned char c, size_t n){
    unsigned char * cPtr = (unsigned char *) s;
    
    for(size_t i=0 ; i<n ; i++){
        if(cPtr[i] == c) return ((void*) (cPtr+i));
    }

    return NULL;
}

void* memset(void *s , unsigned char val , size_t n){
    unsigned char* cptr = (unsigned char *) s;

    for(size_t i=0;i<n;i++){
        cptr[i] = val;
    }

    return s;
}

int memcmp(const void* a,const void* b,size_t n){
    unsigned char * ptr1 = (unsigned char *) a;
    unsigned char * ptr2 = (unsigned char *) b;

    for(size_t i=0;i<n;i++){
        if(ptr1[i] < ptr2[i]) return -1;
        else if(ptr1[i] > ptr2[i]) return 1;
    }

    return 0;
}

void *memcpy(void *dest, const void *src, size_t n){
    unsigned char* d = (unsigned char*) dest;
    const unsigned char* s = (unsigned char*) src;

    for(size_t i=0 ; i<n ; i++){
        d[i] = s[i];
    }

    return (void*) dest;
}

void *memmove(void *dest, const void *src, size_t n){
    unsigned char* d = (unsigned char*) dest;
    const unsigned char* s = (unsigned char*) src;

    if(d > s){
        for(size_t i = n; i > 0;i--) d[i-1] = s[i-1];
    }else{
        for(size_t i = 0; i < n;i++) d[i] = s[i];
    }

    return dest;
}