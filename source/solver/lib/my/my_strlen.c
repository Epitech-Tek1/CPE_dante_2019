/*
** EPITECH PROJECT, 2019
** my_strlen.
** File description:
** counts and returns the numbers of character
*/

int my_strlen(char const *str)
{
    int i = 0;

    for (i; str[i] != '\0'; i++);

    return (i);
}
