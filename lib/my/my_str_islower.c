/*
** EPITECH PROJECT, 2021
** LIB
** File description:
** str is lower
*/

int my_str_islower(const char *str)
{
    int i = 0;

    while (str[i] != 0) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            return (0);
        i++;
    }
    return (1);
}
