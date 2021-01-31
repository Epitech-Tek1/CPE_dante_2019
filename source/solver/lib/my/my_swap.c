/*
** EPITECH PROJECT, 2019
** my_swap.c
** File description:
** swaps the content of two integers whoses addresses are given as a parameter.
*/

void my_swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
