/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** main
*/

#include "dante.h"

int usage(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        write (1, "USAGE\n", 6);
        write (1, "    ./solver maze.txt\n", 22);
        write (1, "DESCRIPTION\n", 12);
        write (1, "    solve a labyrinth\n", 25);
        return (0);
    }
    return (1);
}

static void init_struct(root_t *root)
{
    root->tab = NULL;
    root->size = (vector2i_t){0, 0};
}

int solver(int ac, char **av)
{
    char **tab;
    root_t root;

    init_struct(&root);
    if (84 == map(ac, av, &root)) return (84);
    if (usage(ac, av) == 0)
        return (0);
    check_map(&root);
    change_star(&root);
    remove_y(&root);
    for (int i = 0; root.tab[i] != NULL; i++)
        printf("%s\n", root.tab[i]);
    return (0);
}

int main(int ac, char **av)
{
    if (solver(ac, av) == 84) {
        return (84);
    }
    return (0);
}
