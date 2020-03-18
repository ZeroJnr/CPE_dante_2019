/*
** EPITECH PROJECT, 2020
** init_gen.c
** File description:
** initialisation of every generator values
*/

#include "dante.h"

static int my_alloc(gen_t *gen)
{
    int y = 0;
    int x = 0;

    if (!(gen->maze.maze = malloc(sizeof(char *) *
    (gen->param.height + 1)))) {
        write(2, "Malloc failure\n", 16);
        return 84;
    }
    gen->maze.maze[gen->param.height] = NULL;
    for (; y < gen->param.height; ++y) {
        if (!(gen->maze.maze[y] = malloc(sizeof(char) * gen->param.width + 1)))
            return 84;
        gen->maze.maze[y][gen->param.width] = '\0';
        for (x = 0; x != gen->param.width; ++x)
            gen->maze.maze[y][x] = 'X';
    }
    gen->maze.maze[gen->param.height - 1][gen->param.width - 1] = '*';
    return 0;
}

int init_gen(int ac, char *av[], gen_t *gen)
{
    gen->param.width = atoi(av[1]);
    gen->param.height = atoi(av[2]);

    if (my_alloc(gen) == 84)
        return 84;
    return 0;
}