/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** swap
*/

#include "../include/my.h"

void swap(char **tab, char *folder, struct stat sb)
{
    char *str = NULL,  *test = malloc(sizeof(char) * my_strlen(folder));
    char *temp = NULL, *dest = NULL;
    struct stat s;
    int j = 0, k = 0;
    for (int i = 0; tab[i] != NULL; i++) {
        test = folder;
        str = my_strcat(my_strcat(test, "/"), tab[i]);
        if (tab[i + 1] != NULL)
            temp = my_strcat(my_strcat(test, "/"), tab[i + 1]);
        (stat(str, &sb) == -1) ? exit(84) : 0;
        (stat(temp, &s) == -1) ? exit(84) : 0;
        j = sb.st_mtime;
        k = s.st_mtime;
        if (tab[i + 1] != NULL)
            my_swap(j, k, &tab[i], &tab[i + 1]);
    }
    for (int k = 0; tab[k] != NULL; k++) {
        my_putstr(tab[k]);
        my_putstr(" ");
    } my_putstr("\n");
}