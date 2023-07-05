/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-nathan.baudelin
** File description:
** print_space
*/
#include "include/my_printf.h"

void print_space (int *array, long x, int *taille, char c)
{
    int space;
    int signe = 0;
    if (x >= 0 && array[2] == 1 && array[7] != 'o'
    && array[7] != 'x' && array[7] != 'X')
        signe = signe + 1;
    if (x >= 0 && array[0] == 1 && array[7] == 'o')
        signe = signe + 1;
    if (x >= 0 && array[0] == 1 && array[7] == 'x' ||
    x >= 0 && array[0] == 1 && array[7] == 'X')
        signe = signe + 2;
    space = array[6] + array[4] - count_char_int(array, x) - signe + 1;
    for (int i = 0; i < space; i++) {
        my_putchar(c);
        *taille = *taille + 1;
    }
    return;
}

void print_space_2 (int *array, double x, int *taille, char c)
{
    int space;
    int signe = 0;
    int more = 0;
    if (x >= 0 && array[2] == 1)
        signe = 1;
    if (array[3] == 0)
        more = 1;
    space = array[6] + array[4] - count_char_float(array, x) - signe + more;
    for (int i = 0; i < space; i++) {
        my_putchar(c);
        *taille = *taille + 1;
    }
    return;
}

void print_space_3 (int *array, long long x, int *taille, char c)
{
    int space;
    int signe = 0;
    if (array[2] == 1)
        signe = 1;
    space = array[6] + array[4] - 14 - signe;
    for (int i = 0; i < space; i++) {
        my_putchar(c);
        *taille = *taille + 1;
    }
    return;
}

void print_space_4 (int *array, char *x, int *taille, char c)
{
    int space;
    space = array[6] + array[4] - count_char_string(array, x) + 1;
    for (int i = 0; i < space; i++) {
        my_putchar(c);
        *taille = *taille + 1;
    }
    return;
}

void print_space_5 (int *array, char x, int *taille, char c)
{
    int space;
    space = array[6] + array[4];
    for (int i = 0; i < space; i++) {
        my_putchar(c);
        *taille = *taille + 1;
    }
    return;
}
