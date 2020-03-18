/*
** EPITECH PROJECT, 2020
** get_max
** File description:
** get maximum values
*/

#include "dante.h"

int get_max(my_solv_t *my_solv)
{
    int i = 0;

    for (int j = 0; my_solv->my_map.buffer[i] != '\0'; i++, j++) {
        if (my_solv->game.y_max == 0)
            my_solv->game.x_max = i;
        if (my_solv->my_map.buffer[i] == '\n' || my_solv->my_map.buffer[i] == '\0') {
            ++my_solv->game.y_max;
            if (j != my_solv->game.x_max) {
                printf("Invalid x_max please retry\n");
                return (84);
            }
            j = -1;
        }
    }
    return 0;
}