/*
** EPITECH PROJECT, 2023
** epilib [WSL : Debian]
** File description:
** my_str_to_word_array
*/

#include "../include/my.h"

char **my_str_to_word_array(char *str)
{
    int i, j = 0, k = 0;
    char **array;
    int word_count = my_count_words(str);

    if (word_count == 0)
        return (NULL);
    if (!(array = malloc(sizeof(char *) * (word_count + 1))))
        return (NULL);
    for (i = 0; str[i]; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            str[i] = '\0';
            k = 1;
        } else if (k == 1) {
            array[j] = &str[i];
            j++;
            k = 0;
        }
    }
    array[j] = NULL;
    return (array);
}
