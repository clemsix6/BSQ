/*
** EPITECH PROJECT, 2021
** LIB
** File description:
** get nbr
*/

int my_atoi(char const *str)
{
    int res = 0;
    int is_neg = 0;
    int start = 0;

    if (*str == '-') {
        is_neg = 1;
        start = 1;
    } else if (*str == '+'){
        start = 1;
    }
    for (int i = start; str[i] != '\0'; i++) {
        res = res * 10 + str[i] - '0';
    }
    if (is_neg)
        res = -res;
    return res;
}
