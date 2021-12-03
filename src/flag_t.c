/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** flag_t
*/

#include "../include/my.h"

void flag_t(char *folder)
{
    int i = 0, j = 0;
    struct dirent *lect;
    struct dirent *temp;
    char **tab;
    DIR *rep = opendir(folder), *per = opendir(folder);
    (rep == NULL || per == NULL) ? exit (0) : 0;
    char *str = NULL,  *test = malloc(sizeof(char) * my_strlen(folder)), *dest;
    struct stat sb;
    while ((temp = readdir(per)) != NULL)
        (temp->d_name[0] != '.') ? i++ : 0;
    tab = malloc(sizeof(char *) * i + 1);
    while ((lect = readdir(rep)) != NULL) {
        test = folder;
        str = my_strcat(my_strcat(test, "/"), lect->d_name);
        if (lect->d_name[0] != '.') {
            (stat(str, &sb) == -1) ? exit(84) : 0;
            tab[j] = my_strdup(lect->d_name), j++;
        }
    } closedir(rep);
    swap(tab, folder, sb);
}
