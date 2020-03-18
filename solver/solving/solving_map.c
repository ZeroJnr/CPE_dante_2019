/*
** EPITECH PROJECT, 2020
** solving_map
** File description:
** solve map
*/

#include "dante.h"

static void write_map(my_solv_t *my_solv)
{
    for (int y = 0; y < Y_MAX; y++) {
        for (int x = 0; x < X_MAX; x++) {
            printf("%c", MAZE[y][x]);
        }
        printf("\n");
    }
}

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

static int assigment_map(my_solv_t *my_solv)
{
    int x = 0;
    int y = 0;

    if (my_allocation(my_solv) == 84)
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
    write_map(my_solv);
    return 0;
}