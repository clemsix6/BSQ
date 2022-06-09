/*
** EPITECH PROJECT, 2021
** LIB
** File description:
** Lib header
*/

#ifndef __MY_H__
#define __MY_H__

void my_putchar(const char c);
int my_compute_square_root (int nb);
int my_find_prime_sup (int nb);
int my_getnbr_base (const char *str, const char *base);
int my_is_prime (int nb);
int my_put_nbr (int n);
int my_putnbr_base (int nbr, char const *base);
int my_putstr (char const *str);
char *my_revstr (char *str);
int my_showmem (char const *str, int size);
int my_showstr (char const *str);
int my_str_isalpha (char const *str);
int my_str_islower (const char *str);
int my_str_isnum (char const *str);
int my_str_isprintable (char const *str);
int my_str_isupper (char const *str);
char *my_strcapitalize (char *str);
int my_strcmp (const char *s1, const char *s2);
char *my_strcpy (char *dest, char const *src);
char *my_strlowcase(char *str);
int my_strncmp (const char *s1, const char *s2, int len);
char *my_strncpy (char *dest, char const *src, int n);
char *my_strupcase (char *str);
void my_swap (int *a , int *b);
void my_puterr(char const *err);
int my_atoi(char const *str);
int my_strlen(char const *str);
int my_strlen_stop(char const *str, char stop);
int my_atoi(char const *str);
char *my_itoa(int num);
int my_get_pow (int n, int p);

#endif
