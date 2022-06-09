/*
** EPITECH PROJECT, 2021
** LIB
** File description:
** strcmp
*/

int my_strcmp(const char *s1, const char *s2)
{
    int i = 0;
    char s1c;
    char s2c;

    do {
        s1c = s1[i];
        s2c = s2[i];
        i++;
        if (s1c == s2c)
            continue;
        if (s1c < s2c)
            return (-1);
        else
            return (1);
    } while (s1c != 0 && s2c != 0);
    return (0);
}
