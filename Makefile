# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wchen <wchen@42studen>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 10:56:47 by wchen             #+#    #+#              #
#    Updated: 2022/10/11 23:16:47 by wchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a

CC				=	cc
CFLAGS			=	-Wall -Wextra -Werror

LIBFT_DIR		=	./libft
LIBFT			=	$(LIBFT_DIR)/libft.a

SRCS_DIR		=	./srcs
SRCS			=	$(SRCS_DIR)/ft_printf.c			\
					$(SRCS_DIR)/print_char.c		\
					$(SRCS_DIR)/print_str.c			\
					$(SRCS_DIR)/print_int.c			\
					$(SRCS_DIR)/print_unint.c		\
					$(SRCS_DIR)/print_x.c			\
					$(SRCS_DIR)/print_bx.c			\
					$(SRCS_DIR)/print_ptr.c

OBJS			=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	cp libft/libft.a .
	mv libft.a libftprintf.a
	ar rcs $(NAME) $(OBJS)

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	make clean -C $(LIBFT_DIR)
	rm -f ${OBJS}

fclean:
	make fclean -C $(LIBFT_DIR)
	rm -f ${OBJS}
	rm -f ${NAME}

re: fclean all

