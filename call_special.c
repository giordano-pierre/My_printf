/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-nathan.baudelin
** File description:
** call_special
*/
#include "include/my_printf.h"

void print_special_flags_1 (int *array, long x, int *taille)
{
    if (array[1] != 1 && array[1] != 3 && array[6] != -1)
        print_space (array, x, taille, ' ');
    if (array[1] != 2 && array[1] != 3) {
        print_space_int (array, x, taille);
        print_plus_int (array, x, taille);
        print_diez (array, x, taille);
        if (array[4] != -1)
            print_space (array, x, taille, '0');
    }
    if (array[1] == 1)
        array[1] = 2;
    else
        array[1] = 3;
    return;
}
