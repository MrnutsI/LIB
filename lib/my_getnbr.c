/*
** EPITECH PROJECT, 2023
** root [WSL: Debian]
** File description:
** my_getnbr
*/

#include "../include/my.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int nbr = 0;
    int neg = 1;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            neg = neg * -1;
        ++i;
    }
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nbr = nbr * 10;
            nbr = nbr + str[i] - 48;
            ++i;
        }
    }
    return (nbr * neg);
}
