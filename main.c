#include "libft.h"
#include <stdlib.h>

int main(int ac, char **av) {
    ft_putendl_fd(ft_itoa(atoi(av[1])), 1);
    return 0;
}
