/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** bsq.c
*/

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include "include/my.h"

int find_biggest_square(char **map, int nb_rows, int nb_cols);

char *read_file(const char *filepath)
{
    int fd = open(filepath, 0);
    struct stat file_stat;
    int r_size;

    if (fd == -1)
        exit(84);
    stat(filepath, &file_stat);
    if (file_stat.st_size <= 1)
        exit(84);
    char *buffer = malloc(file_stat.st_size + 1);
    r_size = read(fd, buffer, file_stat.st_size);
    buffer[r_size] = 0;
    close(fd);
    return buffer;
}

int map_count_lines(char *file_content)
{
    int line_count = 0;

    for (int i = 0; file_content[i] != 0; i++) {
        if (file_content[i] == '\n')
            line_count++;
    }
    return line_count - 1;
}

void check_lines(char *file_content, int line_count)
{
    int i = 0;
    int wnb;
    char buffer[16];

    for (; file_content[i] != '\n'; i++) {
        buffer[i] = file_content[i];
    }
    buffer[i] = 0;
    wnb = my_atoi(buffer);
    if (wnb != line_count)
        exit(84);
}

int map_count_columns(char *file_content)
{
    int column_count = 0;
    int i = 0;

    while (file_content[i] != '\n') {
        i++;
    }
    i++;
    while (file_content[i] != '\n') {
        i++;
        column_count++;
    }
    return column_count + 1;
}

char **allocate_array(int l, int c)
{
    char **arr = malloc(sizeof(char *) * l);

    for (int i = 0; i < l; i++) {
        arr[i] = malloc(c);
    }
    return arr;
}

void skip_first_line(char *file_content, int *i)
{
    while (file_content[*i] != '\n') {
        (*i)++;
    }
    (*i)++;
}

char **map_to_array(char *file_content, int line_count, int column_count)
{
    char **arr = allocate_array(line_count, column_count);
    int i = 0;
    int x = 0;
    int y = 0;

    skip_first_line(file_content, &i);
    for (; file_content[i] != 0; i++) {
        arr[y][x] = file_content[i];
        x++;
        if (file_content[i] == '\n') {
            x = 0;
            y++;
        }
    }
    free(file_content);
    return arr;
}

void print_map(char **map, int nb_rows, int nb_cols)
{
    for (int i = 0; i < nb_rows; i++) {
        write(1, map[i], nb_cols);
    }
}

void free_map(char **map, int nb_rows)
{
    for (int i = 0; i < nb_rows; i++) {
        free(map[i]);
    }
    free(map);
}

int main(int ac, char **av)
{
    char **map;
    char *file_content;
    int line_count;
    int column_count;

    if (ac != 2) {
        my_puterr("Wrong arg count.");
        exit(84);
    }
    file_content = read_file(av[1]);
    line_count = map_count_lines(file_content);
    column_count = map_count_columns(file_content);
    check_lines(file_content, line_count);
    map = map_to_array(file_content, line_count, column_count);
    find_biggest_square(map, line_count, column_count);
    print_map(map, line_count, column_count);
    free_map(map, line_count);
    return 0;
}