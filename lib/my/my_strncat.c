/*
** EPITECH PROJECT, 2021
** LIB
** File description:
** strncat
*/

#include "../../include/my.h"

char *my_strncat (char *dest, char const *src, int n)
{
    int dest_len = my_strlen(dest);

    for (int i = 0; i < n; i++)
        dest[dest_len + i] = src[i];
    return (dest);
}
