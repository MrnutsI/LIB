/*
** EPITECH PROJECT, 2023
** epilib [WSL : Debian]
** File description:
** test_lib
*/

#include "../include/my.h"
#include <criterion/criterion.h>

Test(my_getnbr, positive_number) {
    char str[] = "123";
    int result = my_getnbr(str);
    cr_assert_eq(result, 123, "Expected 123 but got %d", result);
}

Test(my_getnbr, negative_number) {
    char str[] = "-456";
    int result = my_getnbr(str);
    cr_assert_eq(result, -456, "Expected -456 but got %d", result);
}

Test(my_getnbr, non_numeric_string) {
    char str[] = "abcdefg";
    int result = my_getnbr(str);
    cr_assert_eq(result, 0, "Expected 0 but got %d", result);
}

Test(my_putstr, print_string) {
    cr_redirect_stdout();
    char str[] = "Hello, World!";
    my_putstr(str);
    cr_assert_stdout_eq_str("Hello, World!");
}