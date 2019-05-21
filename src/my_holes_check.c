/*
** EPITECH PROJECT, 2017
** my_holes_check
** File description:
** my_sokoban
*/

#include "my.h"

list_t my_soko_check(list_t my_soko, int i , int k)
{
	if (my_soko.base[i][k] == 'O')
		if (my_soko.str[i][k] == ' ')
			my_soko.str[i][k] = 'O';
	return (my_soko);
}

list_t my_holes_check(list_t my_soko)
{
	for (int i = 0; i < my_soko.lines ; i++) {
		for (int k = 0; my_soko.base[i][k]; k++)
			my_soko = my_soko_check(my_soko, i ,k);
	}
	return (my_soko);
}
