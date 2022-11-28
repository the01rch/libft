#include <stdbool.h>

void ft_strcpy(char *src, char *str) {
    for (int i = 0; src[i] != '\0'; i++) {
        str[i] = src[i];
    }
}

char *ft_strdup(const char *s) {
    char *new = NULL;

    new = malloc(sizeof(char) * ft_strlen(s) + 1);
    ft_strcpy((char *)s, new)
    return new; 
}
