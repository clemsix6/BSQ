/*
** EPITECH PROJECT, 2021
** LIB
** File description:
** str dup
*/

#include <stdlib.h>
#include "../../include/my.h"

char *my_strdup(const char *src)
{
    int len = my_strlen(src);
    char *mem = (char *) malloc(len);

    for (int i = 0; i < len; i++) {
        mem[i] = src[i];
    }
    return (mem);
}
