#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/05 22:02:18 by ddinaut           #+#    #+#              #
#    Updated: 2018/02/12 09:04:06 by ddinaut          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Output file #
NAME = libfts.a

# Details #
CC		= nasm
FLAGS	= -g -f macho64 -Wall -Wextra -Werror
E_FLAG	=
AR	= ar rc
RAN	= ranlib

# Path #
OBJ_PATH = .obj
SRC_PATH = srcs

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
SRCS = \
	ft_bzero.s 

OBJ	= $(SRC:$(SRC_PATH)/%.s=$(OBJ_PATH)/%.o)
SRC	= $(addprefix $(SRC_PATH)/,$(SRCS))

# Rules #
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@$(RAN) $(NAME)

$(OBJ): $(OBJ_PATH)/%.o : $(SRC_PATH)/%.s
	@mkdir -p $(dir $@)
	@$(CC) $(FLAG) $(E_FLAG) $< -o $@
	@printf "\e[1;38;5;148m%s -> %s                                   \r$(END_COL)" $@ $<
clean:
	@/bin/rm -rf $(OBJ_PATH)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
