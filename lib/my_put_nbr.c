/*
** EPITECH PROJECT, 2023
** root [WSL: Debian]
** File description:
** my_put_nbr
*/

#include "../include/my.h"

int my_put_nbr(int nb)
{
    if (nb > 9) {
        my_put_nbr(nb / 10);
    } else if (nb < 0) {
        nb = nb * -1;
        my_put_nbr(nb / 10);
    }
    return 0;
}
