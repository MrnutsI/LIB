/*
** EPITECH PROJECT, 2023
** root [WSL: Debian]
** File description:
** my_putstr
*/

#include "../include/my.h"

int my_strlen(char const *str);

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return 0;
}
