/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "../include/my.h"

int my_put_nbr(int nb)
{
    int x = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    } if (nb >= 10) {
        x = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(x + 48);
    }
    else
        my_putchar(nb + 48);
    return (0);
}
