/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** display
*/

#include "dante.h"
#include "define.h"

void display(dante_t *dante)
{
    bool wait = false;

    for (int y = 0; SIZE.y - 1 >= y; y++) {
        for (int x = 0; SIZE.x - 1 >= x; x++) {
            if (IS_WAY) {
                _putchar('*', 1);
                wait = true;
            }
            if (MAZE[y][x] == '0') _putchar('*', 1);
            else if (MAZE[y][x] == '1' && !wait) _putchar('X', 1);
        }
        _putchar('\n', 1);
    }
}