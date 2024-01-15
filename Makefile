NAME 		= libkdm.a
CC 			= cc
CFLAGS 		+= -Wall -Wextra -Werror
SRC 		= utils/angle.c\
			  vec2/vec2_advence.c\
			  vec2/vec2_basic.c\
			  vec2/vec2_init.c\
			  vec2/vec2_opperation1.c\
			  vec2/vec2_opperation2.c\
			  vec2/vec2_utils.c\
			  vec2/vec2_variadic.c\
			  vec3/vec3_advence.c\
			  vec3/vec3_basic.c\
			  vec3/vec3_init.c\
			  vec3/vec3_n.c\
			  vec3/vec3_opperation1.c\
			  vec3/vec3_opperation2.c\
			  vec3/vec3_utils.c\
			  vec3/vec3_variadic.c

OBJ 		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar crs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re
