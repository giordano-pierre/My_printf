/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-miniprintf-nathan.baudelin
** File description:
** my_printf
*/
#include <stdarg.h>
#include "include/my_printf.h"

void star (int *array, va_list args)
{
    if (array[8] == 1) {
        int x = va_arg (args, int);
        array[6] = x;
    }
}

int my_printf (char *s, ...)
{
    int array[9];
    int taille = 0;
    va_list args;
    va_start(args, s);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '%') {
            i = create_array(array, s, i, &taille);
            star (array, args);
            print_flag(array, args, &taille);
        } else {
            taille = taille + 1;
            my_putchar (s[i]);
        }
    }
    va_end(args);
    return (taille);
}
