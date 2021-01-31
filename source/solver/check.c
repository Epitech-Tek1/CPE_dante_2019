/*
** EPITECH PROJECT, 2020
** solver
** File description:
** check
*/

#include "dante.h"
#include "define.h"

check_t *check_up(char up, check_t *check)
{
    if (up == 'X' || up == 'Y') {
        check->w++;
        return (check);
    } else if (up == '*') {
        check->s++;
        return (check);
    } else
        return (check);
}

check_t *check_down(char down, check_t *check)
{
    if (down == 'X' || down == 'Y') {
        check->w++;
        return (check);
    } else if (down == '*') {
        check->s++;
        return (check);
    } else
        return (check);
}

check_t *check_right(char right, check_t *check)
{
    if (right == 'X' || right == 'Y') {
        check->w++;
        return (check);
    } else if (right == '*') {
        check->s++;
        return (check);
    } else
        return (check);
}

check_t *check_left(char left, check_t *check)
{
    if (left == 'X' || left == 'Y') {
        check->w++;
        return (check);
    } else if (left == '*') {
        check->s++;
        return (check);
    } else
        return (check);
}

check_t *check_around(root_t *root, check_t *check, int i, int j)
{
    if (I + 1 < root->size.y && TAB[I + 1][J])
        check = check_up(TAB[I + 1][J], check);
    if (I - 1 >= 0 && TAB[I - 1][J]) check = check_down(TAB[I - 1][J], check);
    if (I + 1 < X && TAB[I][J + 1]) check = check_right(TAB[I][J + 1], check);
    if (J - 1 >= 0 && TAB[I][J - 1]) check = check_left(TAB[I][J - 1], check);

    return (check);
}