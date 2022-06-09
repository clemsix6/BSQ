/*
** EPITECH PROJECT, 2021
** LIB
** File description:
** my is prime
*/

int my_is_prime(int nb)
{
    int i = 0;
    int count = 0;
    float div;

    if (nb <= 0)
        return (0);
    for (i = 0; i <= nb; i++) {
        div = nb / (float) i;
        if ((int) div - div == 0)
            count++;
    }
    if (count > 2)
        return (0);
    return (1);
}
