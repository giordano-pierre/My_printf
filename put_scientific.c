/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-miniprintf-nathan.baudelin
** File description:
** put_scientific
*/
#include "include/my_printf.h"

void put_scientific_signe (int c, int *taille)
{
    if (c < 0) {
        *taille = *taille + 1;
        my_putchar('-');
        c = -c;
    } else {
        *taille = *taille + 1;
        my_putchar('+');
    }
    if (c < 10) {
        *taille = *taille + 1;
        my_putchar('0');
    }
}

void my_put_scientific_min (double nb, int pre, int *taille)
{
    int c = 0;
    if (nb != 0.0) {
        while (nb < 1.0) {
            nb = nb * 10;
            c = c - 1;
        }
        while (nb >= 10.0) {
            nb = nb / 10;
            c = c + 1;
        }
    }
    my_put_float(nb, pre, taille);
    *taille = *taille + 1;
    my_putchar('e');
    put_scientific_signe (c, taille);
    my_put_nbr(c, taille);
}

void my_put_scientific_maj (double nb, int pre, int *taille)
{
    int c = 0;
    if (nb != 0.0) {
        while (nb < 1.0) {
            nb = nb * 10;
            c = c - 1;
        }
        while (nb >= 10.0) {
            nb = nb / 10;
            c = c + 1;
        }
    }
    my_put_float(nb, pre, taille);
    *taille = *taille + 1;
    my_putchar('E');
    put_scientific_signe (c, taille);
    my_put_nbr(c, taille);
}

void my_put_scientific_g_min (double nb, int pre, int *taille, int diez)
{
    int c = 0;
    if (nb != 0.0) {
        while (nb < 1.0) {
            nb = nb * 10;
            c = c - 1;
        }
        while (nb >= 10.0) {
            nb = nb / 10;
            c = c + 1;
        }
    }
    my_put_float_super_g(nb, pre, taille, diez);
    *taille = *taille + 1;
    my_putchar('e');
    put_scientific_signe (c, taille);
    my_put_nbr(c, taille);
}

void my_put_scientific_g_maj (double nb, int pre, int *taille, int diez)
{
    int c = 0;
    if (nb != 0.0) {
        while (nb < 1.0) {
            nb = nb * 10;
            c = c - 1;
        }
        while (nb >= 10.0) {
            nb = nb / 10;
            c = c + 1;
        }
    }
    my_put_float_super_g(nb, pre, taille, diez);
    *taille = *taille + 1;
    my_putchar('E');
    put_scientific_signe (c, taille);
    my_put_nbr(c, taille);
}
