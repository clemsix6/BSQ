/*
** EPITECH PROJECT, 2021
** Day11
** File description:
** my_strlowcase.c
*/

char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return (c);
}

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != 0) {
        str[i] = to_lower(str[i]);
        i++;
    }
    return (str);
}
