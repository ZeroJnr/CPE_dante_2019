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

static void init_lines(int y, int x, gen_t *gen)
{
    for (x = 0; gen->maze.maze[y][x] != '\0'; ++x) {
        if (x % 2 == 0)
            gen->maze.maze[y][x] = '*';
    }
}

int init_gen(char *av[], gen_t *gen)
{
    int x = 0;
    int y = 0;
    gen->param.width = atoi(av[1]);
    gen->param.height = atoi(av[2]);
    srand((unsigned)time(NULL));

    if (my_alloc(gen) == 84)
        return 84;
    for (; gen->maze.maze[0][x] != '\0'; ++x)
        gen->maze.maze[0][x] = '*';
    for (; gen->maze.maze[y] != NULL; y++) {
        if (y % 2 == 0)
            init_lines(y, x, gen);
    }
    return 0;
}