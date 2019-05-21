/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** my_sokoban
*/

#include "my.h"

void my_putstr(char *str)
{
	int i = 0;

	while (str[i]) {
		write(1, &str[i], 1);
		i++;
	}
}
