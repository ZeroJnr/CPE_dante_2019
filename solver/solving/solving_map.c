/*
** EPITECH PROJECT, 2020
** solving_map
** File description:
** solve map
*/

#include "dante.h"

static int my_allocation(my_solv_t *my_solv)
{
    MAZE = malloc(sizeof(char *) * (Y_MAX + 1));
    if (!MAZE)
        return 84;
    for (int i = 0; i < Y_MAX; i++) {
        MAZE[i] = malloc(sizeof(char) * (X_MAX + 1));
        if (!MAZE)
            return 84;
    }
    return 0;
}

static int my_allocation_sec(my_solv_t *my_solv)
{
    CPATH = malloc(sizeof(bool *) * (Y_MAX + 1));
    if (!CPATH)
        return 84;
    for (int i = 0; i < Y_MAX; i++) {
        CPATH[i] = malloc(sizeof(bool) * (X_MAX + 1));
        if (!CPATH)
            return 84;
    }
    return 0;
}

static int my_allocation_third(my_solv_t *my_solv)
{
    WASHERE = malloc(sizeof(bool *) * (Y_MAX + 1));
    if (!WASHERE)
        return 84;
    for (int i = 0; i < Y_MAX; i++) {
        WASHERE[i] = malloc(sizeof(bool) * (X_MAX + 1));
        if (!WASHERE)
            return 84;
    }
    return 0;
}


static int assigment_map(my_solv_t *my_solv)
{
    int x = 0;
    int y = 0;
    int alloc_maze = 0;
    int alloc_path = 0;
    int alloc_was_here = 0;

    alloc_maze = my_allocation(my_solv);
    alloc_path = my_allocation_sec(my_solv);
    alloc_was_here = my_allocation_third(my_solv);
    if (alloc_maze == 84 || alloc_path == 84 || alloc_was_here == 84)
        return 84;
    for (int i = 0; y < Y_MAX; i++, y++) {
        for (x = 0; x < X_MAX; i++, x++)
            MAZE[y][x] = my_solv->my_map.buffer[i];
        MAZE[y][x + 1] = '\0';
    }
    return 0;
}

int solving_map(my_solv_t *my_solv)
{
    if (assigment_map(my_solv) == 84)
        return 84;
    if (check_carac(my_solv) == 84)
        return 84;
    return 0;
}