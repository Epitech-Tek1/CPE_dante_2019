/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** init
*/

#include "dante.h"
#include "define.h"

bool init(dante_t *dante, int ac, char const * const *av)
{
    if (!(MAZE = malloc(sizeof(char *) * 10000))) return (false);
    srand(getpid() * time(NULL));
    SIZE = (vector2i_t){_atoi(av[1]), _atoi(av[2])};
    WALL = (wall_t){0, 0};
    RAND = 0;
    for (int y = 0; SIZE_MALLOC1 > y; y++) {
        if (!(MAZE[y] = malloc(10000))) return (false);
        for (int x = 0; SIZE_MALLOC2 > x; x++)
            MAZE[y][x] = (LINE_1) ? '0' : (LINE_2) ? '1' :
            (y % 2 != 0) ? '1' : '1';
        MAZE[y][(_atoi(av[1]) * 2) - 1] = '\0';
    }
    return (true);
}