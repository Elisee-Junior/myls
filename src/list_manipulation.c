/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** linked list function
*/

#include "../include/my.h"

Liste_t *init_list(Liste_t *list)
{
    list = malloc(sizeof(list));
    list->begin = NULL;
    list->end = NULL;
    list->length = 0;
    return (list);
}

Liste_t *push_back(Liste_t *li, char *i)
{
    node_t *elem;
    elem = malloc(sizeof(*elem));
    check_allocated_node(elem);
    elem->value = i;
    elem->next = NULL;
    elem->prev = NULL;
    if (empty_or_filled(li) == 0) {
        li = malloc(sizeof(*li));
        check_allocated(li);
        li->length = 0;
        li->begin = elem;
        li->end = elem;
    } else {
        li->end->next = elem;
        elem->prev = li->end;
        li->end = elem;
    }
    li->length++;
    return li;
}

Liste_t *push_front(Liste_t *li, char *i)
{
    node_t *elem;
    elem = malloc(sizeof(*elem));
    check_allocated_node(elem);
    elem->value = i;
    elem->next = NULL;
    elem->prev = NULL;
    if (empty_or_filled(li) == 0) {
        li = malloc(sizeof(*li));
        check_allocated(li);
        li->length = 0;
        li->begin = elem;
        li->end = elem;
    } else {
        li->begin->prev = elem;
        elem->next = li->begin;
        li->begin = elem;
    }
    li->length++;
    return li;
}
