/*
** EPITECH PROJECT, 2021
** LIB
** File description:
** get nbr
*/

int my_strlen(char const *str);

void my_putchar(char);

int is_number(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int my_getnbr(char const *str)
{
    int size = my_strlen(str);
    int started = 0;

    for (int i = 0; i < size; i++) {
        int r1 = is_number(str[i]);
        int r2 = 0;
        if (i + 1 < size)
            r2 = is_number(str[i + 1]);
        if (r1 == 1 || (str[i] == '-' && r2 == 1)) {
            my_putchar(str[i]);
            started = 1;
        } else if (started == 1)
            break;
    }
    my_putchar('\n');
    return (0);
}
