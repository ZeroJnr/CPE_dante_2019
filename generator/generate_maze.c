/*
** EPITECH PROJECT, 2020
** generate_maze.c
** File description:
** generate_maze
*/

#include "dante.h"

static void shape(int i, char *maze_line, char *previous)
{
    int rnd = 0;

    if ((i - 1) < 0) {
        previous[i] = '*';
        return;
    }
    rnd = (rand() % 2);
    if (rnd == 0)
        previous[i] = '*';
    else
        maze_line[i - 1] = '*';
    return;
}

static void set_lines(gen_t *gen, char *maze_line, char *previous)
{
    int i = 0;

    if (gen->param.width < 2)
        return;
    else if (maze_line == NULL) {
        previous[gen->param.width - 2] = '*';
        return;
    }
    for (; maze_line[i] != '\0'; ++i) {
        if (i % 2 == 0)
            shape(i, maze_line, previous);
    }
}

int generate_maze(gen_t *gen)
{
    int y = gen->param.height;

    for (;y > 0; --y) {
        if (y % 2 == 0)
            set_lines(gen, gen->maze.maze[y], gen->maze.maze[y - 1]);
    }
    if (gen->param.width == 2 && gen->param.height == 2)
        gen->maze.maze[1][0] = 'X';
    return 0;
}