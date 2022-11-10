int ft_tolower(int c) {
    int res;

    res = c + 32;
    if (res >= 97 && res <= 122)
        return (res);
    return (c);
}
