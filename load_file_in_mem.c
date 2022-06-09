/*
** EPITECH PROJECT, 2021
** BootstrapBSQ
** File description:
** load_file_in_mem.c
*/

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

char *load_file_in_mem_read(int fd, int size)
{
    char *buffer = malloc(sizeof(char) * size);
    int index;

    index = read(fd, buffer, size);
    buffer[index] = 0;
    return buffer;
}

char *load_file_in_mem(int fd, struct stat file_stat)
{
    char *buffer;

    buffer = load_file_in_mem_read(fd, file_stat.st_size);
    return buffer;
}
