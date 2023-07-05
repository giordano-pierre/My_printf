/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-miniprintf-nathan.baudelin
** File description:
** put_rest
*/
#include "include/my_printf.h"

int my_put_pointeur (long long nb, int *taille)
{
    if (nb != 0) {
        my_put_pointeur(nb / 16, taille);
        if (nb % 16 < 10) {
            my_put_nbr(nb % 16, taille);
        } else {
            *taille = *taille + 1;
            my_putchar(nb % 16 + 87);
        }
    }
}
