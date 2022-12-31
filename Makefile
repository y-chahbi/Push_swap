# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/21 21:05:59 by ychahbi           #+#    #+#              #
#    Updated: 2022/12/29 17:34:59 by ychahbi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SUBJ = push_swap
SRC  = push_swap.c extra/ft_putchar.c extra/check_errors.c extra/ft_putstr.c extra/ft_atoi.c extra/ft_isdigit.c extra/ft_strjoin.c extra/ft_strlen.c extra/ft_strdup.c
CC=cc
FLAGS=-Wall -Wextra -Werror
RM=rm -f
OBJ_ALL = $(SRC:.c=.o)

all: $(SUBJ)

$(SUBJ): $(OBJ_ALL)
	$(CC) $(FLAGS) $^ -o $@

clean:
	$(RM) $(OBJ_ALL)

fclean: clean
	$(RM) $(SUBJ)

re: fclean all

.PHONY: clean fclean all re