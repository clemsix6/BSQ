/*
** EPITECH PROJECT, 2021
** LIB
** File description:
** show world array
*/

#include "../../include/my.h"
#include <stdio.h>

int my_show_word_array(char *const *tab)
{
    int i = 0;

    while (tab[i] != NULL && tab[i] != 0) {
        my_putstr(tab[i]);
        i++;
    }
    return (0);
}
