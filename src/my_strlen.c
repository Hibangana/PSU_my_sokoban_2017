/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** my_sokoban
*/

#include "my.h"

int my_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
