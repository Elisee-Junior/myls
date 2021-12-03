/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** list manipulation
*/

#include "../include/my.h"

int empty_or_filled(Liste_t *li)
{
    if (li->begin == NULL)
        return (0);
    return (1);
}

void print_list(Liste_t *li)
{
    node_t *temp = li->begin;

    if (li->begin == NULL) {
        my_putstr("Nothing to display.\n");
        return ;
    }
    for (; temp != NULL; temp = temp->next) {
        my_putstr(temp->value);
        my_putstr(" ");
    }
}

void check_allocated(Liste_t *li)
{
    if (li == NULL) {
        write (2, "Erreur : probleme allocation dynamique.\n", 41);
        exit (1);
    }
}

void check_allocated_node(node_t *li)
{
    if (li == NULL) {
        write (2, "Erreur : probleme allocation dynamique.\n", 41);
        exit (1);
    }
}
