/*
** EPITECH PROJECT, 2017
** my_error_check_first
** File description:
** my_sokoban
*/

#include "my.h"

int my_error_check_first(int ac, char **av)
{
	if (ac != 2)
		return (84);
	if (av[1][0] == '-' && av[1][1] == 'h') {
		my_dash_h_options();
		return (0);
	}
	return (1);
}
