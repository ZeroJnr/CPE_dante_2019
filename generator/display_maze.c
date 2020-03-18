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

    for (; MAZEGEN[y + 1]; ++y) {
            my_putstr(MAZEGEN[y]);
            my_putchar('\n');
    }
    my_putstr(MAZEGEN[y]);
}