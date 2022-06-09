/*
** EPITECH PROJECT, 2021
** LIB
** File description:
** str is alpha
*/

int my_str_isalpha(char const *str)
{
    int i = 0;
    int is_upper;
    int is_lower;

    while (str[i] != 0) {
        is_upper = str[i] >= 'a' && str[i] <= 'z';
        is_lower = str[i] >= 'A' && str[i] <= 'Z';
        if (!is_upper && !is_lower)
            return (0);
        i++;
    }
    return (1);
}
