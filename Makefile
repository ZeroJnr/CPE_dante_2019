##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Project Makefile
##

all :
		make -C solver
re :
		make re -C solver

clean : 
		make clean -C solver

fclean :
		make fclean -C solver