/*
** EPITECH PROJECT, 2021
** mylib
** File description:
** mylib
*/

#include "../../header/utils.h"

int my_strlen(const char *str)
{
    int i = 0;
    for (; str[i]; ++i);
    return i;
}
