/*
** EPITECH PROJECT, 2020
** solver
** File description:
** check_deadend
*/

#include "dante.h"
#include "define.h"

int check_around_star(root_t *root, int i, int j)
{
    check_t *check = malloc(sizeof(check_t));
    check->w = 0;
    check->s = 0;

    check = check_around(root, check, i, j);
    if ((check->w >= 2 && check->s <= 1)) {
        TAB[I][J] = 'Y';
        return (0);
    }
    if ((check->w == 1 && check->s == 1))
        TAB[root->size.y - 1][0] = 'Y';
    if (check->w <= 2 && check->s >= 2) {
        return (0);
    }
}

static int check_dead_end(root_t *root)
{
    for (int i = 0; i != Y; i++)
        for (int j = 0; TAB[I][J]; j++) {
            if (TAB[I][J] == '*')
                check_around_star(root, i, j);
        }
    return (0);
}

int check_map(root_t *root)
{
    int i = 0;
    int star = 0;
    int count = 0;

    star = count_star(TAB);
    while (i < star) {
        check_dead_end(root);
        i++;
    }
    return (0);
}