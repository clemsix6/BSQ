/*
** EPITECH PROJECT, 2021
** compute factorial
** File description:
** put_nbr
*/

void my_putchar(char);

void my_put_nbr(int nb)
{
    int units;
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb < 10) {
        my_putchar(nb + 48);
    }
    else {
        units = (nb % 10);
        nb = (nb - units) / 10;
        my_put_nbr(nb);
        my_putchar(units + 48);
    }
}
