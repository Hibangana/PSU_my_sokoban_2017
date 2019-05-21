/*
** EPITECH PROJECT, 2017
** my_moving_player
** File description:
** my_sokoban
*/

#include "my.h"

list_t my_moving_player(list_t my_soko)
{
	switch(getch()) {
	case 65:
		my_soko = my_case_up(my_soko);
		break;
	case 66:
		my_soko = my_case_down(my_soko);
		break;
	case 68:
		my_soko = my_case_left(my_soko);
		break;
	case 67:
		my_soko = my_case_right(my_soko);
		break;
	case 32:
		my_soko = my_case_space(my_soko);
	default :
		break;
	}
	return (my_soko);
}
