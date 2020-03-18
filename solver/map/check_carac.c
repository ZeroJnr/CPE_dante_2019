/*
** EPITECH PROJECT, 2020
** check_carac
** File description:
** check_carac
*/

#include "dante.h"

int check_carac(my_solv_t *my_solv)
{
    for (int y = 0; y < Y_MAX; y++) {
        for (int x = 0; x < X_MAX; x++) {
            if (MAZE[y][x] != '\n' && MAZE[y][x] != '*' &&
            MAZE[y][x] != 'X' && MAZE[y][x] != '\0') {
                printf("Invalide Map please retry\n");
                return 84;
            }
        }
    }
    return 0;
}