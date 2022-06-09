/*
** EPITECH PROJECT, 2021
** LIB
** File description:
** putstr
*/

void my_putchar(char);

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != 0) {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}