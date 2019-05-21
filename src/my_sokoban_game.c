/*
** EPITECH PROJECT, 2017
** my_sokoban_game
** File description:
** my_sokoban
*/

#include "my.h"

void my_sokoban_game(list_t my_soko)
{
	my_soko.base = my_d_str_cpy(my_soko.str, my_soko.base, my_soko.lines);
	my_soko = my_get_player_position(my_soko);
	initscr();
	while (1) {
		curs_set(0);
		clear();
		my_map_printer(my_soko.str, my_soko.lines);
		my_soko = my_moving_player(my_soko);
		refresh();
	}
	endwin();
	return;
}
