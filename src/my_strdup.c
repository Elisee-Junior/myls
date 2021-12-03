/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** my_strdup
*/

#include "../include/my.h"

char *my_strdup(char *src)
{
    int u;
    char *srt;
    int i;

    u = my_strlen(src) + 1;
    srt = malloc(sizeof(char) * (u));
    for (i = 0; src [i] != '\0'; i++)
        srt [i] = src [i];
    return (srt);
}