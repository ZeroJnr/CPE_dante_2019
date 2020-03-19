/*
** EPITECH PROJECT, 2020
** a_stars.c
** File description:
** a_star algorithm
*/

#include "dante.h"

static bool recursive_solve2(my_solv_t *my_solv, int x, int y)
{
    if (x != 0)
        if (recursivesolve(my_solv, x - 1, y)) {
            CPATH[y][x] = true;
            return true;
        }
    if (x != X_MAX - 1)
        if (recursivesolve(my_solv, x + 1, y)) {
            CPATH[y][x] = true;
            return true;
        }
    if (y != 0)
        if (recursivesolve(my_solv, x, y - 1)) {
            CPATH[y][x] = true;
            return true;
        }
    return false;
}

bool recursivesolve(my_solv_t *my_solv, int x, int y)
{
    if (y == ENDY && x == ENDX)
        return true;
    if (MAZE[y][x] == 'X' || WASHERE[y][x]) {
        return false;
    }
    WASHERE[y][x] = true;
    if (recursive_solve2(my_solv, x, y) == true)
        return true;
    else {
        if (y != Y_MAX - 1)
            if (recursivesolve(my_solv, x, y + 1)) {
                CPATH[y][x] = true;
                return true;
            }
    }
    return false;
}

static void write_map_sec(my_solv_t *my_solv)
{
    for (int y = 0; y < Y_MAX; y++) {
        for (int x = 0; x < X_MAX; x++) {
            if (MAZE[y][x] != 'X') {
                if (CPATH[y][x] == true || (y == ENDY && x == ENDX))
                    MAZE[y][x] = 'o';
                else
                    MAZE[y][x] = '*';
            }
            printf("%c", MAZE[y][x]);
        }
        if (y < Y_MAX - 1)
            printf("\n");
    }
}

bool recursive_core(my_solv_t *my_solv)
{
    ENDY = Y_MAX - 1;
    ENDX = X_MAX - 1;

    for (int row = 0; row < Y_MAX; row++)
        for (int col = 0; col < X_MAX; col++) {
            WASHERE[row][col] = false;
            CPATH[row][col] = false;
        }
    bool b = recursivesolve(my_solv, STARTX, STARTY);
    if (b == false) {
        printf("no solution found");
        return false;
    }
    write_map_sec(my_solv);
    return true;
}