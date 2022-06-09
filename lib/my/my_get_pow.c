/*
** EPITECH PROJECT, 2021
** Day11
** File description:
** my_get_pow.c
*/

int my_get_pow (int n, int p)
{
    int result = n;

    for (int i = 0; i < p; i++)
        result *= p;
    return (result);
}
