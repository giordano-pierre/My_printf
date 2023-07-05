/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-nathan.baudelin
** File description:
** print_special
*/
#include "include/my_printf.h"

void print_diez (int *array, int x, int *taille)
{
    if (array[0] == 1) {
        if (array[7] == 'o') {
            my_putstr("0", taille);
        }
        if (array[7] == 'x') {
            my_putstr("0x", taille);
        }
        if (array[7] == 'X') {
            my_putstr("0X", taille);
        }
    }
}

void print_plus_int (int *array, int x, int *taille)
{
    if (array[2] == 1 && array[7] != 'u' && array[7] != 'x' &&
    array[7] != 'X' && array[7] != 'o' && array[7] != 'b') {
        if (x >= 0) {
            *taille = *taille + 1;
            my_putchar('+');
        }
    }
}

void print_plus_float (int *array, double x, int *taille)
{
    if (array[2] == 1) {
        if (x >= 0.0) {
            *taille = *taille + 1;
            my_putchar('+');
        }
    }
}

void print_plus_pointeur (int *array, long long x, int *taille)
{
    if (array[2] == 1) {
        *taille = *taille + 1;
        my_putchar('+');
    }
}
