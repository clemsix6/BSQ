/*
** EPITECH PROJECT, 2021
** LIB
** File description:
** strcat
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int dest_len = my_strlen(dest);
    int src_len = my_strlen(src);

    for (int i = 0; i < src_len; i++) {
        dest[dest_len + i] = src[i];
    }
    return (dest);
}
