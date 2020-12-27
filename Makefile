# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsmith <fsmith@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/19 19:52:14 by fsmith            #+#    #+#              #
#    Updated: 2019/03/09 23:36:10 by fsmith           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CRED=\x1b[31m
CGREEN=\x1b[32m
CYELLOW=\x1b[33m
CBLUE=\x1b[34m
CCYAN=\x1b[36m
CDEFAULT=\x1b[39m
CDEF=$(CDEFAULT)

CMINUS=$(CRED)[-]$(CDEF)
CPLUS=$(CGREEN)[+]$(CDEF)

TIME=$(CCYAN)[$$(date +"%H:%M:%S")]$(CDEF)

NAME=RTv1
CC=clang
AR=ar
RM=rm
EXTRA=
FLAGS=-Werror -Wall -Wextra -O2 $(EXTRA)

all: $(NAME)

LIBFT_DIR=	./lib/libft
LIBFT=		$(LIBFT_DIR)/libft.a
LIBFT_INC=	$(LIBFT_DIR)

$(LIBFT):
	@echo "$(TIME) $(CPLUS) Making libft"
	@$(MAKE) -C $(LIBFT_DIR)

clean_libft:
	@echo "$(TIME) $(CMINUS) Cleaning libft"
	@$(MAKE) -C $(LIBFT_DIR) fclean

OBJ_DIR=	.obj
OBJ_NAMES=	\
		main \
		app \
		primitives \
		scene \
		object_container \
		material \
		shape \
		sphere \
		cylinder \
		cone \
		plane \
		vec3_add \
		vec3_calc \
		vec3_length \
		vec3_rot \
		vec3_mut \
		vec3_clamp \
		camera \
		keystate \
		color \
		light_container \

OBJECTS=	$(patsubst %, $(OBJ_DIR)/%.o, $(OBJ_NAMES))

SRC_DIR=	./src
SOURCES=	$(patsubst %, %.c, $(OBJ_NAMES))

INC_DIR=	./includes
INCLUDES=	$(wildcard $(INC_DIR)/*.h)
IFLAGS=		-I$(INC_DIR) \
			-I$(LIBFT_DIR) \
			-I$(shell brew --prefix)/include

LFLAGS=		\
		-L$(LIBFT_DIR) -lft \
		$(shell sdl2-config --libs) \

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INCLUDES) $(LIBFT)
	@mkdir -p $(OBJ_DIR)
	@echo "$(TIME) $(CPLUS) $@"
	@$(CC) -c -o $@ $< $(IFLAGS) $(FLAGS)

$(NAME): $(OBJECTS)
	@echo "$(TIME) $(CPLUS) $@"
	@$(CC) -o $(NAME) $(LFLAGS) $(OBJECTS)

clean: clean_libft
	@echo "$(TIME) $(CMINUS) $(OBJ_DIR)"
	@$(RM) -rf $(OBJ_DIR)

fclean: clean
	@echo "$(TIME) $(CMINUS) $(NAME)"
	@$(RM) -rf $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE)
