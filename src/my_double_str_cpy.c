/*
** EPITECH PROJECT, 2017
** my_double_str_copy
** File description:
** my_sokoban
*/

#include "my.h"

char **my_d_str_cpy(char **src, char** dest, int lines)
{
	for (int y = 0; y < lines; y++)
		dest[y] = malloc(sizeof(char) * my_strlen(src[y]));
	for (int y = 0; y < lines; y++) {
		for (int x = 0; src[y][x] != '\0' ; x++)
			dest[y][x] = src[y][x];
	}
	return (dest);
}
