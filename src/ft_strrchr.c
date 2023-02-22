#include <stddef.h>
#include <string.h>

char *ft_strrchr(const char *str, int c) {
    for (int i = strlen(str); i > 0; i--) {
        if (str[i] == c)
            return (char *)&str[i];
    }
    return NULL;
}
