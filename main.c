#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int fd;
	char *line;
	int index;
	int ret;

	//int **map;
	/*
	[y0 x0][y0 x1][y0 x2][y0 x3][y0 x4]
	[y1 x0][y1 x1][y1 x2][y1 x3][y1 x4]
	[y2 x0][y2 x1][y3 x2][y3 x3][y3 x4]
	*/

	/*	[hello][fellow][students]
	*/

	if (argc >= 2)
	{
		if (access(argv[1], F_OK) == 0)
		{
			printf("\nFile 1\n");
			index = 0;
			fd = open(argv[1], O_RDONLY);
			ret = 1;
			while ((ret = get_next_line(fd, &line)) > 0)
				index++;
			printf("%i\n", index);
			close(fd);
		}
	}
	return (0);
}

