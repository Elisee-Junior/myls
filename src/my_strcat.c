/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** my_strcat
*/

#include "../include/my.h"

char *my_strcat(char *dest, char *src)
{
    int len = my_strlen(dest);
    int i = 0;
    char *str = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));
    str = my_strcpy(str, dest);
    for (i = 0; src[i] != '\0'; i++)
        str[i + len] = src[i];
    str[len + i] = '\0';
    return (str);
}
