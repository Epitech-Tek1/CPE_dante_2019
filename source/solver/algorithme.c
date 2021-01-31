/*
** EPITECH PROJECT, 2020
** solver
** File description:
** algo
*/

#include "dante.h"
#include "define.h"

int count_star(char **tab)
{
    int count = 0;

    for (int i = 0; tab[i] != NULL; i++)
        for (int j = 0; tab[i][j] != '\0'; j++)
            if (tab[i][j] == '*')
                count++;
    return (count);
}

int change_star(root_t *root)
{
    for (int i = 0; TAB[i] != NULL; i++)
        for (int j = 0; TAB[i][j] != '\0'; j++)
            if (TAB[i][j] == '*')
                TAB[i][j] = 'o';
    return (0);
}

int remove_y(root_t *root)
{
    for (int i = 0; TAB[i] != NULL; i++)
        for (int j = 0; TAB[i][j] != '\0'; j++)
            if (TAB[i][j] == 'Y')
                TAB[i][j] = '*';
    return (0);
}