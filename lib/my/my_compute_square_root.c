/*
** EPITECH PROJECT, 2021
** LIB
** File description:
** compute square root
*/

int rec(int nb, int sub, int count)
{
    if (nb <= 0)
        return (count);
    return (rec(nb - sub, sub + 2, count + 1));
}

int my_compute_square_root(int nb)
{
    int r = rec(nb - 1, 1, 0);
    int pwr = r * r;

    if (pwr == nb)
        return (r);
    else
        return (0);
}
