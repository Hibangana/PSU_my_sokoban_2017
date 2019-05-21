/*
** EPITECH PROJECT, 2017
** my_file_check
** File description:
** my_sokoban
*/

#include "my.h"

int my_bad_letters_check(int i, list_t my_soko)
{
	for (int j = 0; my_soko.str[i][j] != '\n'; j++)
		if (my_soko.str[i][j] != '#' && my_soko.str[i][j] != 'O' &&
		my_soko.str[i][j] != '\n' && my_soko.str[i][j] != 'P' &&
		my_soko.str[i][j] != 'X' && my_soko.str[i][j] != ' ')
			return (84);
	return (0);
}

int my_file_check(list_t my_soko)
{
	for(int i = 0; i < my_soko.lines; i++) {
		if (my_bad_letters_check(i,my_soko) == 84)
			return (84);
	}
	return (0);
}
