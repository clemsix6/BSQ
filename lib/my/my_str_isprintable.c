/*
** EPITECH PROJECT, 2021
** LibWorkshop
** File description:
** my_str_isprintable.c
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != 0) {
        if (str[i] >= 41)
            return (1);
        i++;
    }
    return (0);
}
