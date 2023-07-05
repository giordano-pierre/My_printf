/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-miniprintf-nathan.baudelin
** File description:
** print_rest
*/
#include <stdarg.h>
#include "include/my_printf.h"

void my_print_pointeur (int *array, va_list args, int *taille)
{
    if (array[7] == 'p') {
        long long x = va_arg (args, long long);
        print_space_pointeur (array, x, taille);
        print_space_3 (array, x, taille, ' ');
        print_plus_pointeur (array, x, taille);
        my_putstr("0x", taille);
        my_put_pointeur (x, taille);
    }
}

void my_return_lenght (int *array, va_list args, int *taille)
{
    if (array[7] == 'n') {
        int *x = va_arg (args, int *);
        *x = *taille;
    }
}
