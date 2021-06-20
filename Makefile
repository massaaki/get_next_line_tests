SRC_DIR = ../get_next_line/
SRC_FILES = get_next_line.c get_next_line_utils.c

NAME = test_object

SRCs = ${addprefix ${SRC_DIR}, ${SRC_FILES}}
OBJS = ${SRCs:.c=.o}

FLAGS = -Wall -Werror -Wextra -g

CC = gcc #${FLAGS}
RM = rm -rf

all: mandatory

%.o: %.c
	${CC} -I {SRC_DIR} -c $< -o $@ 

mandatory:
	@clear
	@echo "Mandatory part"
	${CC} -I {SRC_DIR} -D BUFFER_SIZE=90 ${SRCs} main.c -o ${NAME} && ./${NAME}

clean:
	${RM} ${OBJs}

fclean: clean
	${RM} ${NAME}

re: fclean all
