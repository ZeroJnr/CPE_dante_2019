/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** generator main
*/

#include "dante.h"

int main (int ac, char *av[])
{
    gen_t gen = {0};

    if (error_handling(ac, av) == 84)
        return 84;
    if (init_gen(av, &gen) == 84)
        return (84);
    generate_maze(&gen);
    display_maze(&gen);
    my_free(&gen);
}