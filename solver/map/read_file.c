/*
** EPITECH PROJECT, 2020
** read_file
** File description:
** read_file txt maze
*/

#include "dante.h"

int read_file(my_solv_t *my_solv)
{
    my_solv->my_map.buffer = malloc(sizeof(char) * 2048 * 2);
    int get_rd = read(my_solv->my_map.fd, my_solv->my_map.buffer, my_solv->my_map.size);
    if (get_rd <= 0) {
        printf("Error when i read file please check your filepath !\n");
        return 84;
    }
    return get_rd;
}