int ft_toupper(int c) {
    int res;

    res = c - 32;
    if (res >= 65 && res <= 90)
        return (res);
    return (c);
}
