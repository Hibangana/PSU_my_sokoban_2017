/*
** EPITECH PROJECT, 2017
** my_get_number_of_lines
** File description:
** my_sokoban
*/

#include "my.h"

int my_get_number_of_lines(char *av)
{
	int i = 0;
	int read = 0;
	char *line = NULL;
	size_t len = 0;
	FILE *stream = fopen(av, "r");

	if (stream == NULL)
		return (84);
	while ((read = getline(&line , &len, stream) != -1))
		i++;
	free(line);
	fclose(stream);
	return (i);
}
