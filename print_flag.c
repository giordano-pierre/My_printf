/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-miniprintf-nathan.baudelin
** File description:
** print_flag
*/
#include <stdarg.h>
#include "include/my_printf.h"

int verif_flag (int nb, int *taille)
{
    if (nb != 'd' && nb != 'i' && nb != 'u'
    && nb != 'o' && nb != 'x' && nb != 'X'
    && nb != 'e' && nb != 'E' && nb != 'f'
    && nb != 'F' && nb != 'g' && nb != 'G'
    && nb != 'c' && nb != 's' && nb != 'S'
    && nb != '%' && nb != 'n' && nb != 'p'
    && nb != 'b') {
        *taille = *taille + 1;
        my_putchar('%');
        return 1;
    }
    return 0;
}

void print_flag(int *array, va_list args, int *taille)
{
    my_print_integer (array, args, taille);
    my_print_char (array, args, taille);
    my_print_string (array, args, taille);
    my_print_float (array, args, taille);
    my_print_modulo (array, args, taille);
    my_print_octale (array, args, taille);
    my_print_binary (array, args, taille);
    my_print_hexa_maj (array, args, taille);
    my_print_hexa_min (array, args, taille);
    my_print_string_octale (array, args, taille);
    my_print_scientific (array, args, taille);
    my_print_float_g (array, args, taille);
    my_print_pointeur (array, args, taille);
    my_return_lenght (array, args, taille);
}
