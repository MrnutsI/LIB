/*
** EPITECH PROJECT, 2023
** epitech [WSL: Debian]
** File description:
** main
*/

#include "include/my.h"

int main(void)
{
    char str[] = "This is a test string";
    char **array;
    int i = 0;
    array = my_str_to_word_array(str);
    while (array[i] != NULL) {
        printf("%s\n", array[i]);
        i++;
    }
    return (0);
}
