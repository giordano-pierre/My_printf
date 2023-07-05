/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-miniprintf-nathan.baudelin
** File description:
** print_float
*/
#include <stdarg.h>
#include "include/my_printf.h"

void my_print_float (int *array, va_list args, int *taille)
{
    if (array[7] == 'f' || array[7] == 'F' ) {
        double x = va_arg (args, double);
        print_space_float (array, x, taille);
        print_space_2 (array, x, taille, ' ');
        print_plus_float (array, x, taille);
        int pre = convert_precision(array);
        my_put_float (signe_float(x, taille), pre, taille);
    }
}

void my_print_float_g (int *array, va_list args, int *taille)
{
    if (array[7] == 'g') {
        double x = va_arg (args, double);
        int diez = array[0];
        print_space_float (array, x, taille);
        print_space_2 (array, x, taille, ' ');
        print_plus_float (array, x, taille);
        int pre = convert_precision(array);
        my_put_float_g_min (signe_float(x, taille), pre, taille, diez);
    }
    if (array[7] == 'G') {
        double x = va_arg (args, double);
        int diez = array[0];
        print_space_float (array, x, taille);
        print_space_2 (array, x, taille, ' ');
        print_plus_float (array, x, taille);
        int pre = convert_precision(array);
        my_put_float_g_maj (signe_float(x, taille), pre, taille, diez);
    }
}

void my_print_scientific (int *array, va_list args, int *taille)
{
    if (array[7] == 'e') {
        double x = va_arg (args, double);
        print_space_float (array, x, taille);
        print_space_2 (array, x, taille, ' ');
        print_plus_float (array, x, taille);
        int pre = convert_precision(array);
        my_put_scientific_min (signe_float(x, taille), pre, taille);
    }
    if (array[7] == 'E') {
        double x = va_arg (args, double);
        print_space_float (array, x, taille);
        print_space_2 (array, x, taille, ' ');
        print_plus_float (array, x, taille);
        int pre = convert_precision(array);
        my_put_scientific_maj (signe_float(x, taille), pre, taille);
    }
}
