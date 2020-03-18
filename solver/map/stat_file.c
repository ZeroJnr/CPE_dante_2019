/*
** EPITECH PROJECT, 2020
** stat file
** File description:
** stat
*/

#include "dante.h"

int stat_file(my_solv_t *my_solv)
{
    struct stat buf;

    stat(my_solv->my_map.filepath, &buf);
    return buf.st_size;
}