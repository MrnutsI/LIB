/*
** EPITECH PROJECT, 2023
** epilib [WSL : Debian]
** File description:
** my_count_words
*/

#include "../include/my.h"

int my_count_words(char *str)
{
    int i = 0;
    int count = 0;
    int is_word = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            is_word = 0;
        } else if (is_word == 0) {
            count++;
            is_word = 1;
        }
        i++;
    }
    return (count);
}