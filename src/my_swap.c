/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** swap fuction
*/

#include "../include/my.h"

void my_swap(int j, int k, char **src, char **dest)
{
    char *temp;
    if (j < k) {
        temp = my_strdup(*src);
        *src = my_strdup(*dest);
        *dest = my_strdup(temp);
    }
}