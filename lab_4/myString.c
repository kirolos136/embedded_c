#include"myString.h"

char* my_strchr(const char* mem , char required){
    if(mem == NULL) return NULL;

    size_t i = 0;
    while(mem[i] != '\0'){

        if(mem[i] == required) return (char *) (mem + i);
        i++;

    }

    return NULL;
}

void *my_memchr(const void *s, unsigned char c, size_t n){
    unsigned char * cPtr = (unsigned char *) s;
    
    for(size_t i=0 ; i<n ; i++){
        if(cPtr[i] == c) return ((void*) (cPtr+i));
    }

    return NULL;
}

void* my_memset(void *s , unsigned char val , size_t n){
    unsigned char* cptr = (unsigned char *) s;

    for(size_t i=0;i<n;i++){
        cptr[i] = val;
    }

    return s;
}

int my_memcmp(const void* a,const void* b,size_t n){
    unsigned char * ptr1 = (unsigned char *) a;
    unsigned char * ptr2 = (unsigned char *) b;

    for(size_t i=0;i<n;i++){
        if(ptr1[i] < ptr2[i]) return -1;
        else if(ptr1[i] > ptr2[i]) return 1;
    }

    return 0;
}

void *my_memcpy(void *dest, const void *src, size_t n){
    unsigned char* d = (unsigned char*) dest;
    const unsigned char* s = (unsigned char*) src;

    for(size_t i=0 ; i<n ; i++){
        d[i] = s[i];
    }

    return (void*) dest;
}

void *my_memmove(void *dest, const void *src, size_t n){
    unsigned char* d = (unsigned char*) dest;
    const unsigned char* s = (unsigned char*) src;

    if(d > s){
        for(size_t i = n; i > 0;i--) d[i-1] = s[i-1];
    }else{
        for(size_t i = 0; i < n;i++) d[i] = s[i];
    }

    return dest;
}

void my_strcat(char *dest, const char *src){
    size_t i = 0;
    while(dest[i] != '\0') i++;

    size_t j = 0;
    while(src[j] != '\0'){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

int my_strcmp(const char* s1,const char *s2){
    size_t i = 0;

    while(s1[i] != '\0' && s2[i] != '\0'){

        if(s1[i] > s2[i]) return 1;
        else if(s1[i] < s2[i]) return -1;

        i++;
    }

    if(s1[i] == s2[i] ) return 0;
    else if(s1[i] > s2[i]) return 1;
    else return -1;
}

char* my_strcpy(char* dest, const char* src){
    size_t i = 0;

    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    return dest;
}

size_t my_strlen(const char *s){
    int i = 0;
    while(s[i] != '\0') i++;

    return i;
}

size_t my_strcspn(const char *s, const char *reject){
    size_t i = 0;
    while(s[i] != '\0'){
        size_t j = 0;
        while(reject[j] != '\0'){
            if(s[i] == reject[j]) return i;
            j++;
        }
        i++;
    }

    return i;
}

char *my_strncpy(char *dest, const char *src, size_t n){
    size_t i = 0;
    while(src[i] != '\0' && i < n){
        dest[i] = src[i];
        i++;
    }

    for(;i<n;i++){
        dest[i] = '\0';
    }

    return dest;
}

int my_strncmp(const char *s1, const char *s2, size_t n){
    size_t i = 0;
    while(s1[i] != '\0' && s2[i] != '\0' && i < n){
        if(s1[i] < s2[i]) return -1;
        else if(s1[i] > s2[i]) return 1;

        i++;
    }

    if( i == n || (s1[i] == '\0' && s1[2] != '\0')) return 0;
    else if(s1[i] == '\0') return -1;
    else return 1;
}

char *my_strncat(char *dest, const char *src, size_t n){
    size_t i = 0;
    while(dest[i] != '\0'){
        i++;
    }

    size_t j = 0;
    while(j < n && src[j] != '\0'){
        dest[i] = src[j];
        i++;
        j++;
    }

    return dest;
}

char *my_strrchr(const char *s, char c){
    size_t i = 0;
    char *found = NULL;
    while(s[i] != '\0'){
        if(s[i] == c) found = (char *)(s + i);
        i++;
    }

    return found;
}

char *my_strstr(const char *s1, const char *s2){
    if(s2 == NULL) return s1;

    size_t i = 0;
    while(s1[i] != '\0'){
        size_t j = 0;
        size_t reqIndex = i;
        while(s1[i] !='\0' && s2[j] != '\0' && s1[i] == s2[j] ){
            i++;
            j++;
        }
        if(s2[j] == '\0') return (char*)(s1+reqIndex);
        i++;
    }

    return NULL;
}