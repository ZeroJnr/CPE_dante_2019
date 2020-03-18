/*
** EPITECH PROJECT, 2020
** error_handling.c
** File description:
** generator error handling
*/

#include "dante.h"

int error_handling(int ac, char *av[])
{
    if (ac > 3) {
        write(2, "Too many arguments\n", 20);
        return 84;
    } else if (ac < 3) {
        write(2, "Too few arguments\n", 19);
        return 84;
    }
    return 0;
}