/*
** EPITECH PROJECT, 2021
** Bistromatic
** File description:
** my_contains.c
*/

int my_element_count(char c, char *str)
{
    int i = 0;
    int count = 0;

    while (str[i] == 0) {
        if (str[i] == c)
            count++;
        i++;
    }
    return count;
}