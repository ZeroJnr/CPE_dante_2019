/*
** EPITECH PROJECT, 2020
** error_handling.c
** File description:
** generator error handling
*/

#include "dante.h"

static int is_a_digit(char *nb)
{
    for (int i = 0; nb[i] != '\0'; ++i) {
        if (nb[i] < '0' || nb[i] > '9')
            return 84;
    }
    return 0;
}

int error_handling(int ac, char *av[])
{
    if (ac > 4) {
        write(2, "Too many arguments\n", 20);
        return 84;
    } else if (ac < 3) {
        write(2, "Too few arguments\n", 19);
        return 84;
    }
    if (is_a_digit(av[1]) == 84)
        return 84;
    else if (is_a_digit(av[2]) == 84)
        return 84;
    return 0;
}