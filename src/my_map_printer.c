/*
** EPITECH PROJECT, 2017
** my_map_printer
** File description:
** my_sokoban
*/

#include "my.h"

void my_map_printer(char **str, int lines)
{
	int i = 0;

	while (i < lines) {
		printw("%s", str[i]);
		i++;
	}
}
