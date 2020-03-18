/*
** EPITECH PROJECT, 2020
** main
** File description:
** main solver
*/

#include "dante.h"

// int check_carac(my_solv_t *my_solv)
// {
//     for (int y = 0; y < Y_MAX; y++) {
//         for (int x = 0; x < X_MAX; x++) {
//             if (MAZE[y][x] != CARACTERE) {
//                 printf("Invalide Map please retry\n");
//                 return 84;
//             }
//         }
//     }
//     return 0;
// }


static int error_handling(my_solv_t *my_solv, int ac)
{
    if (ac < 2) {
        printf("Too few argument please, retry\n");
        return 84;
    }
    else if (ac > 2) {
        printf("Too many argument please, retry\n");
        return 84;
    }
    return 0;
}

int main(int ac, char *av[])
{
    my_solv_t my_solv = {0};
    my_solv.my_map.filepath = av[1];

    if (error_handling(&my_solv, ac) == 84)
        return 84;
    if (preparing_map(&my_solv) == 84)
        return (84);
    return 0;
}