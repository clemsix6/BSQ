/*
** EPITECH PROJECT, 2021
** LIB
** File description:
** isneg
*/

void my_putchar(char);

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
    my_putchar('\n');
    return (0);
}
