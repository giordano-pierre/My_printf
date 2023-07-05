/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-nathan.baudelin
** File description:
** print_flag_space
*/
#include "include/my_printf.h"

void print_space_int (int *array, int x, int *taille)
{
    if (array[5] == 1 && my_nbrlen(x) - array[6] >= 0 && array[2] == -1
    && array[7] != 'u') {
        if (x >= 0) {
            *taille = *taille + 1;
            my_putchar(' ');
        }
    }
}

void print_space_float (int *array, double x, int *taille)
{
    if (array[5] == 1 && array[6] == -1 && array[2] == -1) {
        if (x >= 0.0) {
            *taille = *taille + 1;
            my_putchar(' ');
        }
    }
}

void print_space_pointeur (int *array, long long x, int *taille)
{
    if (array[5] == 1 && array[6] == -1 && array[2] == -1) {
        *taille = *taille + 1;
        my_putchar(' ');
    }
}
