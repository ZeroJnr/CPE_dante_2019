/*
** EPITECH PROJECT, 2020
** proto_generator
** File description:
** proto
*/

#ifndef PROTO_GEN
#define PROTO_GEN

#include "struct_generator.h"

int main(int ac, char *av[]);
int error_handling(int ac, char *av[]);
int init_gen(char *av[], gen_t *gen);
void display_maze(gen_t *gen);
void my_free(gen_t *gen);
int generate_maze(gen_t *gen);
void rm_walls(gen_t *gen);

#endif
