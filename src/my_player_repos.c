/*
** EPITECH PROJECT, 2017
** my_player_repos
** File description:
** my_sokoban
*/

#include "my.h"

list_t my_player_repos_up(list_t my_soko)
{
	if ((my_soko.str[my_soko.player_y - 1][my_soko.player_x] == 'X' &&
	my_soko.str[my_soko.player_y - 2][my_soko.player_x] == ' ') ||
	(my_soko.str[my_soko.player_y - 1][my_soko.player_x] == 'X' &&
	my_soko.str[my_soko.player_y - 2][my_soko.player_x] == 'O')) {
		my_soko.str[my_soko.player_y][my_soko.player_x] = ' ';
		my_soko.str[my_soko.player_y - 1][my_soko.player_x] = 'P';
		my_soko.str[my_soko.player_y - 2][my_soko.player_x] = 'X';
		my_soko.player_y = my_soko.player_y - 1;
		return (my_soko);
	}
	if (my_soko.str[my_soko.player_y - 1][my_soko.player_x] == 'X' &&
	my_soko.str[my_soko.player_y -2][my_soko.player_x] != ' ')
		return (my_soko);
	if (my_soko.str[my_soko.player_y - 1][my_soko.player_x] == ' ' ||
	my_soko.str[my_soko.player_y - 1][my_soko.player_x] == 'O') {
		my_soko.str[my_soko.player_y][my_soko.player_x] = ' ';
		my_soko.str[my_soko.player_y - 1][my_soko.player_x] = 'P';
		my_soko.player_y = my_soko.player_y - 1;
		return (my_soko);
	}
	return (my_soko);
}

list_t my_player_repos_down(list_t my_soko)
{
	if ((my_soko.str[my_soko.player_y + 1][my_soko.player_x] == 'X' &&
	my_soko.str[my_soko.player_y + 2][my_soko.player_x] == ' ') ||
	(my_soko.str[my_soko.player_y + 1][my_soko.player_x] == 'X' &&
	my_soko.str[my_soko.player_y + 2][my_soko.player_x] == 'O')){
		my_soko.str[my_soko.player_y][my_soko.player_x] = ' ';
		my_soko.str[my_soko.player_y + 1][my_soko.player_x] = 'P';
		my_soko.str[my_soko.player_y + 2][my_soko.player_x] = 'X';
		my_soko.player_y = my_soko.player_y + 1;
		return (my_soko);
	}
	if (my_soko.str[my_soko.player_y + 1][my_soko.player_x] == 'X' &&
	my_soko.str[my_soko.player_y + 2][my_soko.player_x] != ' ')
		return (my_soko);
	if (my_soko.str[my_soko.player_y + 1][my_soko.player_x] == ' ' ||
	my_soko.str[my_soko.player_y + 1][my_soko.player_x] == 'O') {
		my_soko.str[my_soko.player_y][my_soko.player_x] = ' ';
		my_soko.str[my_soko.player_y + 1][my_soko.player_x] = 'P';
		my_soko.player_y = my_soko.player_y + 1;
		return (my_soko);
	}
	return (my_soko);
}

list_t my_player_repos_left(list_t my_soko)
{
	if ((my_soko.str[my_soko.player_y][my_soko.player_x - 1] == 'X' &&
	my_soko.str[my_soko.player_y][my_soko.player_x - 2] == ' ') ||
	(my_soko.str[my_soko.player_y][my_soko.player_x - 1] == 'X' &&
	my_soko.str[my_soko.player_y][my_soko.player_x - 2] == 'O' )){
		my_soko.str[my_soko.player_y][my_soko.player_x] = ' ';
		my_soko.str[my_soko.player_y][my_soko.player_x - 1] = 'P';
		my_soko.str[my_soko.player_y][my_soko.player_x - 2] = 'X';
		my_soko.player_x = my_soko.player_x - 1;
		return (my_soko);
	}
	if (my_soko.str[my_soko.player_y][my_soko.player_x - 1] == 'X' &&
	my_soko.str[my_soko.player_y][my_soko.player_x - 2] != ' ')
		return (my_soko);
	if (my_soko.str[my_soko.player_y][my_soko.player_x - 1] == ' ' ||
	my_soko.str[my_soko.player_y][my_soko.player_x -1] == 'O') {
		my_soko.str[my_soko.player_y][my_soko.player_x] = ' ';
		my_soko.str[my_soko.player_y][my_soko.player_x - 1] = 'P';
		my_soko.player_x = my_soko.player_x - 1;
		return (my_soko);
	}
	return (my_soko);
}
list_t my_player_repos_right(list_t my_soko)
{
	if ((my_soko.str[my_soko.player_y][my_soko.player_x + 1] == 'X' &&
	my_soko.str[my_soko.player_y][my_soko.player_x + 2] == ' ') ||
	(my_soko.str[my_soko.player_y][my_soko.player_x + 1] == 'X' &&
	my_soko.str[my_soko.player_y][my_soko.player_x + 2] == 'O')) {
		my_soko.str[my_soko.player_y][my_soko.player_x] = ' ';
		my_soko.str[my_soko.player_y][my_soko.player_x + 1] = 'P';
		my_soko.str[my_soko.player_y][my_soko.player_x + 2] = 'X';
		my_soko.player_x = my_soko.player_x + 1;
		return (my_soko);
	}
	if (my_soko.str[my_soko.player_y][my_soko.player_x + 1] == 'X' &&
	my_soko.str[my_soko.player_y][my_soko.player_x + 2] != ' ')
		return (my_soko);
	if (my_soko.str[my_soko.player_y][my_soko.player_x + 1] == ' ' ||
	my_soko.str[my_soko.player_y][my_soko.player_x + 1] == 'O') {
		my_soko.str[my_soko.player_y][my_soko.player_x] = ' ';
		my_soko.str[my_soko.player_y][my_soko.player_x + 1] = 'P';
		my_soko.player_x = my_soko.player_x + 1;
		return (my_soko);
	}
	return (my_soko);
}
