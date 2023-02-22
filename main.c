#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av) {
    const char *s1 = "reda,le,boss";

    printf("%s\n", ft_strrchr(s1, ','));
    return 0;
}
