/*
** EPITECH PROJECT, 2020
** preparing_map
** File description:
** perpare txt map with open, read, stat
*/

#include "dante.h"

int preparing_map(my_solv_t *my_solv)
{
    my_solv->my_map.size = stat_file(my_solv);
    my_solv->my_map.buffer_size = my_calloc(my_solv->my_map.size + 1);
    my_solv->my_map.fd = open_file(my_solv);
    if (my_solv->my_map.fd <= 0)
        return 84;
    my_solv->my_map.rd = read_file(my_solv);
    if (my_solv->my_map.rd <= 0)
        return 84;
    if (get_max(my_solv) == 84)
        return 84;
    Y_MAX++;
    if (solving_map(my_solv) == 84)
        return 84;
    return 0;
}