/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** my_strlen
*/

#include "../include/my.h"

int my_strlen(char *str)
{
    int i = 0;
    for (i = 0; str[i] != '\0'; i++);
    return (i);
}