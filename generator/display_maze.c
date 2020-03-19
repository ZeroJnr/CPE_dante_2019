/*
** EPITECH PROJECT, 2020
** display_maze.c
** File description:
** display_maze
*/

#include "dante.h"

void display_maze(gen_t *gen)
{
    int y = 0;

    for (; MAZEGEN[y] != NULL; ++y) {
        printf("%s", MAZEGEN[y]);
        if (y < Y - 1)
            printf("\n");
    }
}