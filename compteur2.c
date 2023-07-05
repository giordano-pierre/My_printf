/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-nathan.baudelin
** File description:
** compteur2
*/

#include "include/my_printf.h"

long my_count_octal (long nb, long *p)
{
    if (nb != 0) {
        my_count_octal(nb / 8, p);
        *p = *p + 1;
        return (*p);
    }
}

long my_count_binary (long nb, long *p)
{
    if (nb != 0) {
        my_count_binary(nb / 2, p);
        *p = *p + 1;
        return (*p);
    }
}

long my_count_hexa (long nb, long *p)
{
    if (nb != 0) {
        my_count_hexa(nb / 16, p);
        if (nb % 16 < 10) {
            *p = *p + 1;
        } else {
            *p = *p + 1;
        }
        return (*p);
    }
}
