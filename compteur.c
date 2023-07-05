/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-nathan.baudelin
** File description:
** compteur
*/
#include "include/my_printf.h"

int count_char_float (int *array, double x)
{
    int c;
    if (array[7] == 'f' || array[7] == 'F') {
        int nb1 = (int)x;
        int pre = array[3];
        c = my_nbrlen(nb1) + 1 + pre;
        return c;
    }
    if (array[7] == 'e' || array[7] == 'E') {
        int nb1 = (int)x;
        int pre = array[3];
        c = 6 + pre;
        return c;
    }
    return (count_char_float_2(array, x));
}

int count_char_float_2 (int *array, double x)
{
    if (array[7] == 'g' || array[7] == 'G') {
        int c = 0;
        int nb1 = (int)x;
        int pre = array[3];
        int nb2 = (x - nb1) * my_compute_power_rec(10, pre - my_nbrlen(nb1));
        if (my_nbrlen(nb1) < pre)
            c = 1 + pre;
        if (my_nbrlen(nb1) > pre)
            c = 5 + pre;
        if (my_nbrlen(nb1) == pre)
            c = pre;
        for (int i = 0; nb2 % 10 == 9 && array[0] == -1; i++) {
            c = c - 1;
            nb2 = nb2 / 10;
        }
        return c;
    }
    return 0;
}

int count_char_int (int *array, long x)
{
    if (array[7] == 'i' || array[7] == 'd' || array[7] == 'u')
        return (my_nbrlen(x));
    if (array[7] == 'x' || array[7] == 'X') {
        if (x != 0) {
            long c = 0;
            long *p = &c;
            return (my_count_hexa(x, p));
        }
        return 1;
    }
    return (count_char_int_2 (array, x));
}

int count_char_int_2 (int *array, long x)
{
    if (array[7] == 'o') {
        if (x != 0) {
            long c = 0;
            long *p = &c;
            return (my_count_octal(x, p));
        }
        return 1;
    }
    if (array[7] == 'b') {
        if (x != 0) {
            long c = 0;
            long *p = &c;
            return (my_count_binary(x, p));
        }
        return 1;
    }
    return 0;
}

int count_char_string (int *array, char *x)
{
    if (array[7] == 's' || array[7] == 'S') {
        int pre = array[3];
        if (pre == -1 || pre > my_strlen(x))
            pre = my_strlen(x);
        return pre;
    }
}
