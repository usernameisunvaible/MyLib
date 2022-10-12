/*
** EPITECH PROJECT, 2021
** mylib
** File description:
** mylib
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../header/mylib.h"
#include <stdbool.h>



int main (int ac, char **av)
{
    my_fprint("newfile.txt", O_CREAT, "Hello %d World", 486);
    return 0;
}
