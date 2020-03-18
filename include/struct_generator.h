/*
** EPITECH PROJECT, 2020
** struct_generator
** File description:
** struct
*/

#ifndef STRUCT_GEN
#define STRUCT_GEN

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdbool.h>
#include <time.h>

typedef struct gen gen_t;
typedef struct param param_t;
typedef struct maze maze_t;

struct maze
{
    char **maze;
};

struct param
{
    int width;
    int height;
};

struct gen
{
    maze_t maze;
    param_t param;
};

#endif