/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** my_sokoban
*/

#include "my.h"

int my_sokoban(char *av)
{
	list_t my_soko;
	int i = 0;
	size_t len = 0;
	FILE *stream = fopen(av, "r");

	my_soko.lines = my_get_number_of_lines(av);
	my_soko.str = malloc(sizeof(char*) *my_soko.lines);
	my_soko.base = malloc(sizeof(char*) * my_soko.lines);
	if (stream == NULL)
		return (84);
	while ((getline(&my_soko.str[i], &len, stream)) != -1)
		i++;
	if (my_file_check(my_soko) == 84)
		return (84);
	my_sokoban_game(my_soko);
	for (int j = 0; j < my_soko.lines; j++)
		free(my_soko.str[j]);
	free(my_soko.str);
	free(stream);
	return (0);
}
