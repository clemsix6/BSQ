/*
** EPITECH PROJECT, 2021
** LibWorkshop
** File description:
** my_strcapitalize.c
*/

char to_upper(char c);

char *my_strcapitalize(char *str)
{
    int i = 0;

    while (str[i] != 0) {
        if (i == 0) {
            str[0] = to_upper(str[0]);
            i++;
            continue;
        }
        if (str[i - 1] == ' ')
            str[i] = to_upper(str[i]);
        i++;
    }
    return (str);
}
