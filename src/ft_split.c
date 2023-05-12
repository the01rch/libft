#include <unistd.h>
#include <stdlib.h>

int nb_delim(char const *s, char c) {
    int nb = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c && s[i] >= 1)
            nb++;
    }
    return nb;
}

int *size_cols(char const *s, char c) {
    int rows = nb_delim(s, c);
    int *size = malloc(sizeof(int) * rows);
    int x = 0;

    for (int y = 0; y < rows; y++) {
        for ( ; s[x] != '\0'; x++) {
            if (s[x] != c)
                size[y] = x;
        }
    } 
    return size;
}

char **ft_split(char const *s, char c) {
    return NULL; 
}
