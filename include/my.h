/*
** EPITECH PROJECT, 2023
** root [WSL: Debian]
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>

/* lib */
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_strcmp(char const *s1, char const *s2);

#endif /* !MY_H_ */
