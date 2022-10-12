/*
** EPITECH PROJECT, 2021
** mylib
** File description:
** mylib
*/

#include "../../header/utils.h"

void my_revstr(char *str)
{
    char tmp;
    int index = 0;
    int len = my_strlen(str) - 1;

    while (index < len) {
        tmp = str[index];
        str[index] = str[len];
        str[len] = tmp;
        ++index;
        --len;
    }
}
