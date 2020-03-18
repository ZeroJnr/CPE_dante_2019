/*
** EPITECH PROJECT, 2020
** rm_walls.c
** File description:
** rm_walls
*/

#include "dante.h"

static void rm_x(gen_t *gen, int midd, int y, int x)
{
    if (Y - 2 >= 0 && X - 1 >= 0)
        MAZEGEN[Y - 2][X - 1] = '*';
    if (Y - 1 >= 0 && X - 2 >= 0)
        MAZEGEN[Y - 1][X - 2] = '*';
    for (int i = 0; i < midd; ++i) {
        if (MAZEGEN[y][x] == 'X')
            MAZEGEN[y][x] = '*';
        y = rand() % Y;
        x = rand() % X;
    }
}

void rm_walls(gen_t *gen)
{
    int midd = (Y + X) / 2;
    int y = rand() % Y;
    int x = rand() % X;

    rm_x(gen, midd, y, x);
}