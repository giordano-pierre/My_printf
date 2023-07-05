/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-miniprintf-nathan.baudelin
** File description:
** print_int
*/
#include <stdarg.h>
#include "include/my_printf.h"

void my_print_integer (int *array, va_list args, int *taille)
{
    if (array[7] == 'i' || array[7] == 'd' || array[7] == 'u') {
        int x = va_arg (args, int);
        print_special_flags_1 (array, x, taille);
        my_put_nbr (x, taille);
        print_special_flags_1 (array, x, taille);
    }
}

void my_print_octale (int *array, va_list args, int *taille)
{
    if (array[7] == 'o') {
        long x = va_arg (args, long);
        print_special_flags_1 (array, x, taille);
        if (x != 0) {
            my_put_octal(signe_long(x, taille), taille);
        } else
            my_put_nbr(x, taille);
        print_special_flags_1 (array, x, taille);
    }
}

void my_print_binary (int *array, va_list args, int *taille)
{
    if (array[7] == 'b') {
        long x = va_arg (args, long);
        print_special_flags_1 (array, x, taille);
        if (x != 0) {
            my_put_binary(signe_long(x, taille), taille);
        } else
            my_put_nbr(x, taille);
        print_special_flags_1 (array, x, taille);
    }
}

void my_print_hexa_maj (int *array, va_list args, int *taille)
{
    if (array[7] == 'X') {
        long x = va_arg (args, long);
        print_special_flags_1 (array, x, taille);
        if (x != 0) {
            my_put_hexa_maj(signe_long(x, taille), taille);
        } else
            my_put_nbr(x, taille);
        print_special_flags_1 (array, x, taille);
    }
}

void my_print_hexa_min (int *array, va_list args, int *taille)
{
    if (array[7] == 'x') {
        long x = va_arg (args, long);
        print_special_flags_1 (array, x, taille);
        if (x != 0) {
            my_put_hexa_min(signe_long(x, taille), taille);
        } else
            my_put_nbr(x, taille);
        print_special_flags_1 (array, x, taille);
    }
}
