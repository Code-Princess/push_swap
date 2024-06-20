# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/18 23:29:38 by llacsivy          #+#    #+#              #
#    Updated: 2024/06/20 19:39:40 by llacsivy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= push_swap
CFLAGS 		= -Wall -Wextra -Werror

LIBFTDOTA	= libft/libft.a
SRCS 		= push_swap.c input_error_checks.c  print_helpers.c \
				helper_list_one.c helper_list_two.c free_functions.c


OBJS 		= ${SRCS:.c=.o}

%.o : %.c
	cc $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(LIBFTDOTA) $(OBJS)
	cc $(OBJS) $(LIBFTDOTA) -o $(NAME)
# cc -g $(OBJS) $(LIBFTDOTA) /Users/llacsivy/LeakSanitizer/liblsan.dylib -o $(NAME)

$(LIBFTDOTA):
	$(MAKE) -C libft/
	
clean:
	$(MAKE) clean -C libft/
	rm -f $(OBJS)

fclean : clean
	$(MAKE) fclean -C libft/
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re