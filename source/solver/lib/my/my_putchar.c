/*
** EPITECH PROJECT, 2019
** my_putchar
** File description:
** displays a character
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void my_putchar(char c)
{
    write (1, &c, 1);
}
