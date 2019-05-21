/*
** EPITECH PROJECT, 2017
** my_h
** File description:
** my_sokoban_h
*/

#ifndef MY_H_
#define MY_H_

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
struct my_sokoban
{
	char **str;
	char **base;
	int lines;
	int loop;
	int player_x;
	int player_y;
	int player_base_x;
	int player_base_y;
	int count;
};
typedef struct my_sokoban list_t;
list_t my_case_up(list_t my_soko);
list_t my_case_down(list_t my_soko);
list_t my_case_left(list_t my_soko);
list_t my_case_right(list_t my_soko);
list_t my_case_space(list_t my_soko);
list_t my_holes_check(list_t my_soko);
list_t my_player_repos_up(list_t my_soko);
list_t my_player_repos_down(list_t my_soko);
list_t my_player_repos_left(list_t my_soko);
list_t my_player_repos_right(list_t my_soko);
list_t my_moving_player(list_t my_soko);
list_t my_player_detected(char **str, int x, int y, list_t my_soko);
list_t my_get_player_position(list_t my_soko);
char **my_d_str_cpy(char **src, char** dest, int lines);
void my_dash_h_options(void);
void my_putstr(char *str);
int my_error_check_first(int ac, char **av);
int my_sokoban(char *av);
int my_get_number_of_lines(char *av);
int my_strlen(char *str);
void my_sokoban_game(list_t my_soko);
int my_file_check(list_t my_soko);
void my_map_printer(char **str, int lines);
#endif
