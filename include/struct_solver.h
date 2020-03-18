/*
** EPITECH PROJECT, 2020
** struct_solver.h
** File description:
** struct
*/

#ifndef STRUCT_SOLVER
#define STRUCT_SOLVER

typedef struct my_map my_map_t;
typedef struct my_solv my_solv_t;
typedef struct game game_t;

struct my_map
{
    int size;
    int fd;
    char *filepath;
    char *buffer;
    char *buffer_size;
    int rd;
};

struct game
{
    char **maze;
    int x_max;
    int y_max;
};

struct my_solv
{
    game_t game;
    my_map_t my_map;
};

#endif
