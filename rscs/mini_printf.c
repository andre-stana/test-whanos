/*
** EPITECH PROJECT, 2022
** mini_printf.c
** File description:
** a function that print a mini_printf
*/

#include "mini_print.h"

void mini_printf(const char *format, ...)
{
    va_list list;
    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            (format[i + 1] == 'c') ? (my_putchar(va_arg(list, int))) : 0;
            (format[i + 1] == 'i') ? (my_put_nbr(va_arg(list, int))) : 0;
            (format[i + 1] == 'd') ? (my_put_nbr(va_arg(list, int))) : 0;
            (format[i + 1] == 's') ? (my_putstr(va_arg(list, char *))) : 0;
            (format[i + 1] == '%') ? (my_putchar('%')) : 0;
            i++;
        } else
            (my_putchar(format[i]));
    }
    va_end(list);
}
