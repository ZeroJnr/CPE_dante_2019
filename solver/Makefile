##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Solver Makefile
##

LIB_DIR = ../lib/

TEST = tests/tests.c	\

SRC_DIR = ./
SRC_MAP = ./map/
SRC_SOLV = ./solving/

SRC = $(SRC_MAP)open_file.c	\
	  $(SRC_MAP)read_file.c	\
	  $(SRC_MAP)stat_file.c	\
	  $(SRC_MAP)preparing_map.c	\
	  $(SRC_MAP)check_carac.c	\
	  $(SRC_SOLV)get_max.c	\
	  $(SRC_SOLV)solving_map.c	\
	  $(SRC_SOLV)recursive_algorithm.c	\
	  $(SRC_SOLV)correct_path.c	\

SRC_BUILD	=	$(SRC) $(SRC_DIR)main.c

NAME = solver

TEST_BIN = unit_tests

CFLAGS = -Wall -Wextra -I../include/ -I ../lib/

OBJ	=	$(SRC_BUILD:.c=.o)

OBJ_TESTS	=	$(SRC:.c=.o)

all: $(OBJ)
	make -C $(LIB_DIR)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) -L $(LIB_DIR) -lmy

tests_run: CFLAGS += --coverage
tests_run: $(OBJ_TESTS)
		make -C $(LIB_DIR)
		gcc -o $(TEST_BIN) $(OBJ_TESTS) $(TEST) -L $(LIB_DIR) -lmy $(CFLAGS) -lcriterion --coverage
		./$(TEST_BIN)
		gcovr --exclude tests --print-summary

debug: CFLAGS += -g
debug: re

clean:
	@rm -f $(OBJ)
	@rm -f $(LIB_DIR)*.a
	@rm -f $(SRC_DIR)*.gc*
	@rm -f $(SRC_SOLV)*.gc*
	@rm -f $(SRC_MAP)*.gc*
	@rm -f $(LIB_DIR)*.o

fclean: clean
	@rm -f $(TEST_BIN)
	@rm -f $(TEST_BIN)
	@rm -f $(NAME)

re: fclean all