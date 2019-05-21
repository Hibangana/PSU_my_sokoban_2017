/*
** EPITECH PROJECT, 2017
** my_get_player_position
** File description:
** my_sokoban
*/

#include "my.h"
list_t my_player_detected(char **str, int x, int y,list_t my_soko)
{
	if (str[y][x] == 'P') {
		my_soko.player_x = x;
		my_soko.player_y = y;
		my_soko.player_base_x = x;
		my_soko.player_base_y = y;
	}
	return (my_soko);
}

list_t my_get_player_position(list_t my_soko)
{
	char **str = my_soko.str;

	for (int y = 0; y < my_soko.lines ; y++) {
		for (int x = 0; str[y][x] != '\n'; x++) {
			my_soko = my_player_detected(str,x,y,my_soko);
		}
	}
	return (my_soko);
}
