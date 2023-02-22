#ifndef LIBTF_H
# define LIBTF_H

#include <string.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
size_t ft_strlen(const char *s);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
char *ft_itoa(int n);
char *ft_strdup(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);

#endif
