/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** my_swap_char
*/

#include <stdio.h>

void my_swap_char(char *a, char *b)
{
    char c;
    c = *a;
    *a = *b;
    *b = c;
}