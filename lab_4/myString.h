#ifndef STRING_H
#define STRING_H

typedef unsigned long long size_t;

#define NULL ((void*) 0)

void *memchr(const void *s, unsigned char c, size_t n);
int memcmp(const void* a,const void* b,size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
void *memset(void *s,unsigned char val, size_t n);

char* strchr(char* mem , char required);

#endif