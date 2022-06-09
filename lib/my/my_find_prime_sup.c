/*
** EPITECH PROJECT, 2021
** LIB
** File description:
** find sup prime
*/

int my_is_prime(int);

int my_find_prime_sup (int nb)
{
    while (my_is_prime(nb) == 0)
        nb++;
    return (nb);
}
