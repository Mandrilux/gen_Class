##
## Makefile for  in /home/baptiste/rendu/CPE_colle_semaine1
## 
## Made by 
## Login   <baptiste@epitech.net>
## 
## Started on  Wed Apr 27 18:58:13 2016 
## Last update Fri Jan 13 10:42:29 2017 
##

NAME	:=	test

SRC	:=	Victim.cpp \
		Sorcerer.cpp \
		Peon.cpp

CC	:=	g++

OBJ	:=	$(SRC:.cpp=.o)

CXXFLAGS  :=	-Wall -Wextra -W -pedantic -ansi -Werror -std=c++03 -g

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:		fclean all
