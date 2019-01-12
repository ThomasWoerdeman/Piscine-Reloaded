#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: twoerdem <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/01/09 15:27:12 by twoerdem      #+#    #+#                  #
#    Updated: 2019/01/09 15:27:13 by twoerdem      ########   odam.nl          #
#                                                                              #
#******************************************************************************#

NAME = libft.a
SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
INCLUDES = ./includes/*.h

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	ar -r $(NAME) *.o $(INCLUDES)

clean:
	rm -f ./*.o

fclean: clean
	rm -f ./$(NAME)

re: fclean all