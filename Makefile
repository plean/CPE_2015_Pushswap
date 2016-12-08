##
## Makefile for  in /home/planch_j/rendu/CPE_2015_Pushswap
## 
## Made by Jean PLANCHER
## Login   <planch_j@epitech.net>
## 
## Started on  Thu Nov 19 19:30:15 2015 Jean PLANCHER
## Last update Sat Nov 21 16:06:59 2015 Jean PLANCHER
##

CC	= cc

RM	= rm -f

CFLAGS	+= -W -g3
CFLAGS	+= -I./include/

NAME	= push_swap

SRCS	= main.c \
	  my_getnbr.c \
	  my_putchar.c \
	  my_put_nbr.c \
	  my_putstr.c \
	  my_strlen.c \
	  p.c \
	  r.c \
	  my_strcat.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:   clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
