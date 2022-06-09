/*
** EPITECH PROJECT, 2021
** Bistromatic
** File description:
** my_itoa.c
*/

#include <stdbool.h>
#include <stdlib.h>

char *my_revstr(char *str);

int get_str_size(int num)
{
    int i = 0;

    if (num < 0)
        num = -num;
    while (num != 0) {
        num /= 10;
        i++;
    }
    return i;
}

void fill_str(int nbr, char *str, bool is_neg)
{
    int i = 0;
    int rem = 0;

    str[0] = 0;
    while (nbr != 0) {
        rem = nbr % 10;
        str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
        nbr /= 10;
    }
    if (is_neg)
        str[i++] = '-';
}

char *my_itoa(int nbr)
{
    bool is_neg = false;
    int str_size = get_str_size(nbr);
    char *str = malloc(sizeof(char) * str_size + 1);

    if (nbr < 0) {
        nbr = -nbr;
        is_neg = true;
    }
    fill_str(nbr, str, is_neg);
    return my_revstr(str);
}
