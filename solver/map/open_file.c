/*
** EPITECH PROJECT, 2020
** open_file.c
** File description:
** open file
*/

#include "dante.h"

int open_file(my_solv_t *my_solv)
{
    my_solv->my_map.fd = open(my_solv->my_map.filepath, O_RDONLY);
        if (my_solv->my_map.fd <= 0) {
            printf("Error when i open file, please check your filepath !\n");
            return 84;
        }
    return my_solv->my_map.fd;
}