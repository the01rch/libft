#include <stdlib.h>
#include "../libft.h"
#include <stdio.h>

char *ft_itoa(int n) {
    char *snb;
    int pow;
    int rst;
    int i;

    i = 0;
    rst = 0;
    pow = 0;
    snb = NULL;
    if (n <= 9) {
        snb = malloc(sizeof(char) * 1);
        snb[0] = n + '0';
        return snb;
    }
    if (n <= 99) {
        for ( ; i < n; ) {
            i += 10;
            pow++;
        }
        if (i > n && i != n) {
            i = (i - 10);
            pow -= 1;
        }
        snb = malloc(sizeof(char) * pow);
        rst = n - i;
        snb[0] = pow + '0';
        snb[1] = rst + '0';
    }
    return snb;
}
