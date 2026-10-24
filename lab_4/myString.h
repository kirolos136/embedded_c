#ifndef STRING_H
#define STRING_H

#include <stddef.h>

void *my_memchr(const void *s, unsigned char c, size_t n);
int my_memcmp(const void* a,const void* b,size_t n);
void *my_memcpy(void *dest, const void *src, size_t n);
void *my_memmove(void *dest, const void *src, size_t n);
void *my_memset(void *s,unsigned char val, size_t n);

char* my_strchr(const char* mem , char required);

void my_strcat(char *dest, const char *src);

int my_strcmp(const char* s1,const char *s2);

char* my_strcpy(char* dest, const char* src);

size_t my_strlen(const char *s);

size_t my_strcspn(const char *s, const char *reject);

char *my_strncpy(char *dest, const char *src, size_t n);

int my_strncmp(const char *s1, const char *s2, size_t n);

char *my_strncat(char *dest, const char *src, size_t n);

char *my_strrchr(const char *s, char c);

char *my_strstr(const char *s1, const char *s2);

#endif