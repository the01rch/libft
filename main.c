#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av) {
    const char *s1 = "redaleboss";
    const char *s2 = "redlenul";

    printf("res = %d\n", ft_strncmp(s1, s2, 4));
    return 0;
}
