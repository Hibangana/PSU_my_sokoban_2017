/*
** EPITECH PROJECT, 2017
** my_cases
** File description:
** my_sokoban
*/

#include "my.h"

list_t my_case_up(list_t my_soko)
{
	my_soko = my_player_repos_up(my_soko);
	my_soko = my_holes_check(my_soko);
	return (my_soko);
}

list_t my_case_down(list_t my_soko)
{
	my_soko = my_player_repos_down(my_soko);
	my_soko = my_holes_check(my_soko);
	return (my_soko);
}

list_t my_case_left(list_t my_soko)
{
	my_soko = my_player_repos_left(my_soko);
	my_soko = my_holes_check(my_soko);
	return (my_soko);
}

list_t my_case_right(list_t my_soko)
{
	my_soko = my_player_repos_right(my_soko);
	my_soko = my_holes_check(my_soko);
	return (my_soko);
}

list_t my_case_space(list_t my_soko)
{
	my_soko.player_x = my_soko.player_base_x;
	my_soko.player_y = my_soko.player_base_y;
	my_soko.str = my_d_str_cpy(my_soko.base, my_soko.str, my_soko.lines);
	return (my_soko);
}
