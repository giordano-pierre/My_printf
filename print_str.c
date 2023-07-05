/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-miniprintf-nathan.baudelin
** File description:
** print_str
*/
#include <stdarg.h>
#include "include/my_printf.h"

void my_print_char (int *array, va_list args, int *taille)
{
    if (array[7] == 'c') {
        char x = va_arg (args, int);
        print_space_5 (array, x, taille, ' ');
        *taille = *taille + 1;
        my_putchar (x);
    }
}

void my_print_string (int *array, va_list args, int *taille)
{
    if (array[7] == 's') {
        char *x = va_arg (args, char *);
        int pre = array[3];
        if (pre == -1 || pre > my_strlen(x))
            pre = my_strlen(x);
        print_space_4 (array, x, taille, ' ');
        my_putstr_modif (x, pre, taille);
    }
}

void my_print_string_octale (int *array, va_list args, int *taille)
{
    if (array[7] == 'S') {
        char *x = va_arg (args, char *);
        print_space_4 (array, x, taille, ' ');
        my_put_string_octale (x, taille);
    }
}

void my_print_modulo (int *array, va_list args, int *taille)
{
    if (array[7] == '%') {
        *taille = *taille + 1;
        my_putchar ('%');
    }
}
