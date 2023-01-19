/*
** EPITECH PROJECT, 2023
** lib [WSL : Debian]
** File description:
** my_atoi
*/

#include "../include/my.h"

int my_atoi(char *str)
{
    int result = 0;
    int sign = 1;
    if (*str == '-') {
        sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result * sign;
}
