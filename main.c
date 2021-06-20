#include "gnl_tests.h"

// COLORS
#define GREEN "\x1b[32m"
#define RED "\x1b[31m"
#define DEFAULT "\x1b[0m"

void print_green(char *str)
{
	printf(GREEN "%s" DEFAULT, str);
}

void print_RED(char *str)
{
	printf(RED "%s" DEFAULT, str);
}

int get_next_line(int fd, char **line);

int main(int argc, char *argv[])
{
	printf("\n");
	printf("* * * * * * * * * * * * * * * * * * * * *\n");
	printf("*                                       *\n");
	printf("* GET_NEXT_LINE tests                   *\n");
	printf("*                                       *\n");
	printf("* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n");

	printf("BUFFER_SIZE..: %d\n", BUFFER_SIZE);

	char *line = NULL;
	int fd;
	int result;

	// fd = open("./files_test/one_line_with_nl.txt", O_RDONLY);
	fd = open("./files_test/out_file.txt", O_RDONLY);
	result = get_next_line(fd, &line);


	close(fd);
	printf("\n\n");
	return (0);
}
