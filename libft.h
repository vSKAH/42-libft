//
// Created by jimmy on 07/11/22.
//

#ifndef LIBFT_LIBFT_H
#include <string.h>
#define LIBFT_LIBFT_H

#endif //LIBFT_LIBFT_H


int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);

void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n);

size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t size);

char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);

