/*
** EPITECH PROJECT, 2020
** display_maze.c
** File description:
** display_maze
*/

#include "dante.h"

void display_maze(gen_t *gen)
{
    for (int y = 0; y < gen->param.height; ++y) {
        for (int x = 0; x < gen->param.width + 1; ++x)
            my_putchar(gen->maze.maze[y][x]);
    }
    my_putchar('\0');
}