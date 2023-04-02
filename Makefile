# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 02:35:28 by rlevilla          #+#    #+#              #
#    Updated: 2023/03/19 15:41:08 by rlevilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIR_SRCS = srcs/
DIR_OBJS = objs/
SRCS = srcs/a_is_sorted.c \
	   srcs/ft_check_error.c \
	   srcs/aff_stack.c \
	   srcs/full_push.c \
	   srcs/ft_input.c \
	   srcs/little_sort.c \
	   srcs/big_sort.c \
	   srcs/main.c \
	   srcs/bsize.c \
	   srcs/free_stack.c \
	   srcs/push.c srcs/check_error_argv.c srcs/ft_ptrsize_tab.c srcs/check_error_int.c srcs/reverse_rotate.c srcs/check_error_onestr.c srcs/rotate.c srcs/final_tab.c srcs/ft_strcmp.c srcs/ft_atol.c srcs/swap.c srcs/sort_four.c srcs/free_ptr.c

OBJS	= ${SRCS:.c=.o}

LIBFT = libft

CFLAGS	= gcc -Wall -Wextra -Werror

RM	= rm -f

OPTIONS	= -I

NAME	= push_swap

all:	${NAME}

$(NAME): $(OBJS)
	$(MAKE) -C libft/
	$(CFLAGS) $(OBJS) -L./libft/ -lft -o $(NAME)

.c.o:
			${CFLAGS} -c $< -o ${<:.c=.o}

${LIBFT}:
		${MAKE} -C /libft/

clean:
			${MAKE} -C libft/ clean
			${RM} ${OBJS}

fclean:	clean
				${RM} ${NAME}
				${MAKE} -C libft/ fclean
re:	fclean all

.PHONY: clean fclean all re
