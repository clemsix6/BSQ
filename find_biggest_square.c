/*
** EPITECH PROJECT, 2021
** BootstrapBSQ
** File description:
** find_biggest_square.c
*/

#include <stdbool.h>
#include <stdio.h>

struct s_square {
    int row;
    int col;
    int size;
};

struct s_map {
    char **map;
    int nb_rows;
    int nb_cols;
};

bool square_is_valid_row(struct s_map map, struct s_square square, int sr)
{
    char map_char;

    for (int sc = square.col; sc < square.col + square.size; sc++) {
        if (sc >= map.nb_cols)
            return false;
        map_char = map.map[sr][sc];
        if (map_char == 'o')
            return false;
    }
    return true;
}

bool square_is_valid(struct s_map map, struct s_square square)
{
    bool result;

    for (int sr = square.row; sr < square.row + square.size; sr++) {
        if (sr >= map.nb_rows)
            return false;
        result = square_is_valid_row(map, square, sr);
        if (!result)
            return false;
    }
    return true;
}

struct s_square get_biggest_square(struct s_map map, int r, int c)
{
    struct s_square square;

    square.row = r;
    square.col = c;
    square.size = 0;
    while (square_is_valid(map, square)) {
        square.size++;
    }
    square.size -= 1;
    return square;
}

struct s_square find_biggest_square_row(struct s_map map, int r)
{
    struct s_square best_square;
    struct s_square current_square;

    best_square.size = -1;
    for (int c = 0; c < map.nb_cols; c++) {
        current_square = get_biggest_square(map, r, c);
        if (best_square.size < current_square.size)
            best_square = current_square;
        if (best_square.size >= map.nb_cols ||
            best_square.size >= map.nb_rows)
            return best_square;
    }
    return best_square;
}

void print_biggest_square_row(char **map, struct s_square square, int r)
{
    for (int c = square.col; c < square.col + square.size; c++) {
        map[r][c] = 'x';
    }
}

void print_biggest_square(char **map, struct s_square square)
{
    for (int r = square.row; r < square.row + square.size; r++) {
        print_biggest_square_row(map, square, r);
    }
}

int find_biggest_square(char **map, int nb_rows, int nb_cols)
{
    struct s_map i_map;
    struct s_square best_square;
    struct s_square current_square;

    i_map.map = map;
    i_map.nb_rows = nb_rows;
    i_map.nb_cols = nb_cols - 1;
    best_square.size = -1;
    for (int r = 0; r < nb_rows; r++) {
        current_square = find_biggest_square_row(i_map, r);
        if (best_square.size < current_square.size)
            best_square = current_square;
        if (best_square.size >= i_map.nb_cols ||
            best_square.size >= i_map.nb_rows)
            break;
    }
    print_biggest_square(map, best_square);
    return 0;
}