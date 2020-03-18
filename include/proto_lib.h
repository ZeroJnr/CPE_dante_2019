/*
** EPITECH PROJECT, 2020
** proto_lib.h
** File description:
** PROTO_LIB
*/

#ifndef PROTO_LIB
#define PROTO_LIB

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>

int my_strncmp(char *s1, char *s2, int n);
int my_lenght(char const *);
void my_putchar(char);
char *my_strcpy(char *, char *);
void reverse_string(char *);
char *show_number(int);
void show_string(char const *);
char *my_strstr(char *, char *);
int to_number(char const *);
void my_putstr(char const *);
char *my_strdup(char *src);
char *my_str_ret(char *str, int src);
char **str_to_word_array(char const *str);
int total_words(char const *str);
int my_strncmp(char *s1, char *s2, int n);
int my_strcmp(char const *str, char const *to_find);
char *my_calloc(size_t size);

#endif
