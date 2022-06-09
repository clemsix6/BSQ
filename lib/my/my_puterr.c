/*
** EPITECH PROJECT, 2021
** LibWorkshop
** File description:
** my_puterr.c
*/

#include "../../include/my.h"
#include <unistd.h>

void my_puterr(char const *err)
{
    write(2, err, my_strlen(err));
}