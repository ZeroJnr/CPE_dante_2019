/*
** EPITECH PROJECT, 2020
** my_free.c
** File description:
** my_free
*/

#include "dante.h"

void my_free(gen_t *gen)
{
    for (int i = 0; gen->maze.maze[i] != NULL; ++i)
        free(gen->maze.maze[i]);
    free(gen->maze.maze);
}