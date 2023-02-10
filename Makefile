# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/21 21:05:59 by ychahbi           #+#    #+#              #
#    Updated: 2023/02/10 20:50:38 by ychahbi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SUBJ = push_swap
CHEK = checker_bonus
SRC  = push_swap.c extra/check_errors.c extra/ft_atoi.c extra/ft_isdigit.c extra/ft_putchar.c extra/ft_putstr.c extra/ft_split.c extra/ft_strdup.c extra/ft_strjoin.c extra/ft_strlen.c extra/ft_substr.c extra/swap.c extra/push.c extra/rotate.c extra/reverse.c push_swap_u.c extra/ft_calloc.c extra/ft_bzero.c extra/ft_memset.c extra/sort_3.c extra/sort_5.c extra/big_sort.c extra/find_index.c extra/the_big_player.c extra/is_sorted_a.c extra/find_best_move.c extra/s_element_dex.c extra/s_el_a_b.c extra/get_max_min.c extra/handl_stacks.c extra/assest_magic.c extra/last_sort.c extra/current_partrs.c extra/incressing.c extra/free_stacks.c 
SRC_CHEK = checker.c extra/check_errors.c extra/ft_atoi.c extra/ft_isdigit.c extra/ft_putchar.c extra/ft_putstr.c extra/ft_split.c extra/ft_strdup.c extra/ft_strjoin.c extra/ft_strlen.c extra/ft_substr.c extra/swap.c extra/push.c extra/rotate.c extra/reverse.c extra/ft_calloc.c extra/ft_bzero.c extra/ft_memset.c  extra/is_sorted_a.c bonus/checker_u.c bonus/get_next_line.c bonus/get_next_line_utils.c bonus/ft_strncmp.c 
CC=cc
FLAGS=-Wall -Wextra -Werror
RM=rm -f
OBJ_ALL = $(SRC:.c=.o)
CHEK_ALL = $(SRC_CHEK:.c=.o)

all: $(SUBJ)

$(SUBJ): $(OBJ_ALL)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.c push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_ALL) $(CHEK_ALL)

checker_bonus: $(CHEK)

$(CHEK): $(CHEK_ALL)
	$(CC) $(FLAGS) $^ -o $@

fclean: clean
	$(RM) $(SUBJ) $(CHEK)

re: fclean all

.PHONY: clean fclean all re checker_bonus
