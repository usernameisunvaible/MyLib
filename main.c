/*
** EPITECH PROJECT, 2021
** mylib
** File description:
** mylib
*/

#include "includes/mylib.h"


char *dec_to_oct(char *dec, int base)
{
    int in = my_atoi(dec);
    char *out = malloc(sizeof(char));
    char *tmp;
    int index = 0;
    out[0] = 0;
    while (in / base != 0) {
        tmp = my_strdup(out);
        free(out);
        out = malloc(sizeof(char) * my_strlen(tmp) + 3);
        my_strcopy(out, tmp);
        free(tmp);
        out[index] = (in % base) + 48;
        out[index + 1] = 0;
        in = in / base;
        ++index;
    }
    out[index] = (in % base) + 48;
    out[index + 1] = 0;
    my_revstr(out);
    return out;
}

int main (int ac, char **av)
{
    printf("%s\n",  dec_to_oct("4561", 8));
    return 0;
}
