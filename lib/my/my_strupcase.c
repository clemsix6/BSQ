/*
** EPITECH PROJECT, 2021
** Day11
** File description:
** my_strupcase.c
*/

char to_upper(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != 0) {
        str[i] = to_upper(str[i]);
        i++;
    }
    return str;
}
