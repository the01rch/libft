#include <stddef.h>

char *strchr(const char *str, int c) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            return (char *)&str[i];
        }
    }   
    return NULL;
}
