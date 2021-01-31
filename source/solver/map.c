/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** map
*/

#include "dante.h"
#include "define.h"

int count(char *buff)
{
    int count = 0;

    for (int i = 0; buff[i]; i++)
        if (buff[i] == '\n')
            count++;
    return (count);
}

static int print_tab(char *buff, root_t *root)
{
    int i = 0;
    int j = 0;
    int e = 0;

    root->size.y = count(buff);
    root->size.x = my_strlen(buff);
    if (!(TAB = malloc(sizeof(char *) * root->size.y + 10)))
        return (84);
    for (int i = 0; i < root->size.y; i++)
        TAB[i] = malloc(sizeof(char) * root->size.x + 10);
    for (i = 0; buff[e] != '\0'; i++) {
        for (j = 0; buff[e] != '\n'; j++) {
            TAB[i][j] = buff[e];
            e++;
        }
        e++;
        TAB[i][j] = '\0';
    }
    TAB[i] = NULL;
}

int map(int ac, char **av, root_t *root)
{
    char *buff;
    int fd;
    struct stat statbuf;

    stat(av[1], &statbuf);
    buff = malloc(sizeof(char) * statbuf.st_size + 10);
    if (!(fd = open(av[1], O_RDONLY)))
        return (84);
    read(fd, buff, statbuf.st_size);
    buff[statbuf.st_size] = '\0';
    close(fd);
    if (84 == print_tab(buff, root))
        return (84);
}