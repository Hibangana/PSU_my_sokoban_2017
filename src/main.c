/*
** EPITECH PROJECT, 2017
** my_main
** File description:
** my_sokoban
*/

#include "my.h"

int main(int ac, char **av)
{
	if (my_error_check_first(ac, av) != 1)
		return (my_error_check_first(ac, av));
	return(my_sokoban(av[1]));
}
