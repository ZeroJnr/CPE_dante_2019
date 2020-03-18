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

    if (!(MAZEGEN = malloc(sizeof(char *) * (Y + 1)))) {
        write(2, "Malloc failure\n", 16);
        return 84;
    }
    MAZEGEN[Y] = NULL;
    for (; y < Y; ++y) {
        if (!(MAZEGEN[y] = malloc(sizeof(char) * X + 1)))
            return 84;
        MAZEGEN[y][X] = '\0';
        for (x = 0; x != X; ++x)
            MAZEGEN[y][x] = 'X';
    }
    MAZEGEN[Y - 1][X - 1] = '*';
    return 0;
}

static void init_lines(int y, int x, gen_t *gen)
{
    for (x = 0; MAZEGEN[y][x] != '\0'; ++x) {
        if (x % 2 == 0)
            MAZEGEN[y][x] = '*';
    }
}

int init_gen(char *av[], gen_t *gen)
{
    int x = 0;
    int y = 0;
    X = atoi(av[1]);
    Y = atoi(av[2]);
    srand((unsigned)time(NULL));

    if (my_alloc(gen) == 84)
        return 84;
    for (; MAZEGEN[0][x] != '\0'; ++x)
        MAZEGEN[0][x] = '*';
    for (; MAZEGEN[y] != NULL; y++) {
        if (y % 2 == 0)
            init_lines(y, x, gen);
    }
    return 0;
}