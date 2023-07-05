/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-miniprintf-nathan.baudelin
** File description:
** put_str
*/
#include <unistd.h>
#include "include/my_printf.h"

void my_putchar(char c)
{
    write (1, &c, 1);
}

int my_putstr_modif (char const *str, int pre, int *taille)
{
    int i = 0;
    while (str[i] != '\0' && i < pre){
        *taille = *taille + 1;
        my_putchar(str[i]);
        i = i + 1;
    }
}

void my_put_string_octale (char *str, int *taille)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 32 && str[i] < 127) {
            *taille = *taille + 1;
            my_putchar(str[i]);
        } else {
            *taille = *taille + 1;
            my_putchar('\\');
            my_put_zero (str[i], taille);
            my_put_octal(str[i], taille);
        }
    }
}

void my_put_zero (char c, int *taille)
{
    if (c < 10) {
        *taille = *taille + 2;
        my_putchar('0');
        my_putchar('0');
    } else if (c < 100) {
        *taille = *taille + 1;
        my_putchar('0');
    }
}
