/*
** EPITECH PROJECT, 2020
** my_free.c
** File description:
** my_free
*/

#include "dante.h"

void my_free(gen_t *gen)
{
    for (int i = 0; i != gen->param.height; ++i)
        free(gen->maze.maze[i]);
}