/*
** EPITECH PROJECT, 2020
** proto_solver.h
** File description:
** solver
*/

#ifndef PROTO_SOLVER
#define PROTO_SOLVER

#include "macro_solver.h"

int stat_file(my_solv_t *my_solv);
int read_file(my_solv_t *my_solv);
int open_file(my_solv_t *my_solv);
int preparing_map(my_solv_t *my_solv);
int my_number_len(int nbr);
int my_lenght_sec(char const *str, int j);
int get_y_max(char *buffer);
int get_x_max(char *str, int y_max);
int get_max(my_solv_t *my_solv);
int solving_map(my_solv_t *my_solv);
bool recursive_core(my_solv_t *my_solv);
int check_carac(my_solv_t *my_solv);
bool recursivesolve(my_solv_t *my_solv, int x, int y);
void correct_path(my_solv_t *my_solv);
void write_map_sec(my_solv_t *my_solv);

#endif
