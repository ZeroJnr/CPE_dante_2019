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

    for (; gen->maze.maze[y + 1]; ++y) {
            my_putstr(gen->maze.maze[y]);
            my_putchar('\n');
    }
    my_putstr(gen->maze.maze[y]);
}