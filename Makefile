##
## Makefile for  in /home/baptiste/rendu/CPE_colle_semaine1
## 
## Made by 
## Login   <baptiste@epitech.net>
## 
## Started on  Wed Apr 27 18:58:13 2016 
## Last update Sun Jan 15 20:03:03 2017 
##

NAME	:=	class

SRC	:=	main.cpp \
		Creator.cpp

CC	:=	g++

OBJ	:=	$(SRC:.cpp=.o)

CXXFLAGS  :=	-Wall -Wextra -W -pedantic -ansi -Werror -std=c++03 

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:		fclean all
