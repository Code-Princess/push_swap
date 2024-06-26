# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/18 23:29:38 by llacsivy          #+#    #+#              #
#    Updated: 2024/06/26 19:52:53 by llacsivy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= push_swap
CFLAGS 		= -Wall -Wextra -Werror

LIBFTDOTA	= libft/libft.a
SRCS 		= push_swap.c input_error_checks.c helper_list_1.c \
				helper_list_2.c free_functions.c print_helpers.c \
				sort_functions.c command_helpers.c command_functions_swap.c \
				command_functions_push.c command_functions_rotate.c \
				sort_small_amount_of_numbers.c helper_list_3.c \
				k_sort_helper_functions.c k_sort_functions.c push_swap_utils.c
				

OBJS 		= ${SRCS:.c=.o}

%.o : %.c
	cc -g $(CFLAGS) -c $< -o $@
	

all : $(NAME)

$(NAME) : $(LIBFTDOTA) $(OBJS)
# cc  $(OBJS) $(LIBFTDOTA) -o $(NAME)
	cc -g $(OBJS) $(LIBFTDOTA) /Users/llacsivy/LeakSanitizer/liblsan.dylib -o $(NAME)
	

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