#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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
    int *size = NULL; 
    int x = 0;

    if (rows == 0)
        return NULL;
    size = malloc(sizeof(int) * rows);
    if (size == NULL)
        return NULL;
    for (int y = 0; y < rows; y++) {
        for (int u = 0 ; s[x] != '\0'; x++, u++) {
            if (s[x++] == c) {
                size[y] = u;
                break;
            }
        }
    }
    return size;
}

char **ft_split(char const *s, char c) {
    int rows = nb_delim(s, c);
    int *cols = size_cols(s, c); 
    char **arr = NULL;
    int u = 0;

    if (rows == 0)
        return NULL;
    arr = malloc(sizeof(char *) * rows + 1);
    for (int y = 0; y < rows; y++) {
        arr = malloc(sizeof(char) * cols[y] + 1);
        for (int x = 0; x < cols[y]; x++) {
            arr[y][x] = s[u];
            u++;
        } 
        arr[y][cols[y]] = '\0';
        u++;
    }
    arr[rows] = NULL;
    return NULL;
}

int main(int ac, char **av) {
    char const *str = "bleach/hxh/snk/vinland/kingdom/CSM";
    char **arr = ft_split(str, '/');

    if (arr == NULL)
        printf("ERROR : NULL\n");
    printf("%s", arr[0]);
    /*
    for (int i = 0; arr[i] != NULL; i++) {
        printf("arr[%d] = %s\n", i, arr[i]);
    }
    */
}
