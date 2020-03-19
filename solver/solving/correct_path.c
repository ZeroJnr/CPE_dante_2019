/*
** EPITECH PROJECT, 2020
** correct_path
** File description:
** path
*/

#include "dante.h"

void write_map_sec(my_solv_t *my_solv)
{
    for (int y = 0; y < Y_MAX; y++) {
        printf("%s", MAZE[y]);
        if (y < Y_MAX - 1)
            printf("\n");
    }
}

void correct_path(my_solv_t *my_solv)
{
    for (int y = 0; y < Y_MAX; y++) {
        for (int x = 0; x < X_MAX; x++) {
            if (MAZE[y][x] != 'X') {
                if (CPATH[y][x] == true || (y == ENDY && x == ENDX))
                    MAZE[y][x] = 'o';
                else
                    MAZE[y][x] = '*';
            }
        }
    }
    write_map_sec(my_solv);
}