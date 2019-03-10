#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/05 22:02:18 by ddinaut           #+#    #+#              #
#    Updated: 2018/02/26 15:38:33 by ddinaut          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Output file #
NAME =		libfts.a
NAME_TEST =	test.bin

# Details #
CC		= nasm
FLAGS	= -f macho64

AR	= ar rc
RAN	= ranlib

# Path #
OBJ_PATH = .obj
SRC_PATH = srcs
INC_PATH = includes

# Sub_dirs #

# Colors #
COL_RED			= \033[1;31m
COL_BLUE		= \033[1;34m
COL_BLACK		= \033[1;30m
COL_GREEN		= \033[1;32m
COL_WHITE		= \033[1;37m
COL_YELLOW		= \033[1;33m
COL_PURPLE		= \033[1;35m
END_COL			= \033[0;m

# Sources #
SRCS =				\
	ft_isupper.s	\
	ft_isalnum.s	\
	ft_isprint.s	\
	ft_islower.s	\
	ft_isalpha.s	\
	ft_isdigit.s	\
	ft_toupper.s	\
	ft_tolower.s	\
	ft_isascii.s	\
	ft_bzero.s		\
	ft_strcat.s		\
	ft_strcpy.s		\
	ft_puts.s		\
	ft_strlen.s		\
	ft_memset.s		\
	ft_memcpy.s		\
	ft_strdup.s		\
	ft_cat.s		\
	ft_memalloc.s

OBJ	= $(SRC:$(SRC_PATH)/%.s=$(OBJ_PATH)/%.o)
SRC	= $(addprefix $(SRC_PATH)/,$(SRCS))

# Rules #
.PHONY: all clean fclean test re

all: $(NAME) test

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@$(RAN) $(NAME)

$(OBJ): $(OBJ_PATH)/%.o : $(SRC_PATH)/%.s
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -I$(INC_PATH) $< -o $@
	@printf "\e[1;38;5;148m%s -> %s                                   \r$(END_COL)" $@ $<

test:
	@gcc main.c -I$(INC_PATH) -L. -lfts -o $(NAME_TEST)

clean:
	@/bin/rm -rf $(OBJ_PATH)

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f $(NAME_TEST)

re: fclean all
