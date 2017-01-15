##
## Makefile for  in /home/baptiste/rendu/CPE_colle_semaine1
## 
## Made by 
## Login   <baptiste@epitech.net>
## 
## Started on  Wed Apr 27 18:58:13 2016 
## Last update Sun Jan 15 17:25:18 2017 DESKTOP-0S05REL
##

NAME	:=	class

SRC	:=	Main.cpp

CC	:=	g++

OBJ	:=	$(SRC:.cpp=.o)

CXXFLAGS  :=	-Wall -Wextra -W -pedantic -ansi -Werror -std=c++03 -O3

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:		fclean all
