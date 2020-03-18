##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Generator Makefile
##

LIB_DIR = ../lib/

TEST = tests/tests.c	\

SRC_DIR = ./
SRC_GEN = ./generator/

SRC =	$(SRC_DIR)error_handling.c	\
		$(SRC_DIR)display_maze.c	\
		$(SRC_DIR)init_gen.c	\
		$(SRC_DIR)my_free.c	\
		$(SRC_DIR)generate_maze.c	\
		$(SRC_DIR)rm_walls.c

SRC_BUILD	=	$(SRC) $(SRC_DIR)main.c

NAME = generator

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