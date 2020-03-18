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
typedef struct index index_t;

struct my_map
{
    int size;
    int fd;
    char *filepath;
    char *buffer;
    char *buffer_size;
    int rd;
};

struct index
{
    int startx;
    int starty;
    int endx;
    int endy;
};

struct game
{
    char **maze;
    bool **cpath;
    bool **washere;
    int x_max;
    int y_max;
};

struct my_solv
{
    index_t index;
    game_t game;
    my_map_t my_map;
};

#endif
