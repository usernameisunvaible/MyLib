/*
** EPITECH PROJECT, 2021
** mylib
** File description:
** mylib
*/

#ifndef UTLIS_H_
    #define UTLIS_H_


    #define NO_FLAGS 0
    #define DEFAULT_MOD S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH

    #define PRINT_BUF_SIZE 1024
    #define FPRINT_BUF_SIZE 1024

    #define DIGITS "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

#include <stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include <stdarg.h>

int my_strlen(const char *str);
char *my_strdup(const char *src);
void my_strcopy(char *out, const char *src);
bool my_strcomp(const char *str_a, const char *str_b);
char *read_file(const char *path, int buf_size);
int write_file(char *path, char *str, int  flags);
char *my_strcat(char *out, char *in);
char *my_itoa(int i);
char *my_revstr(char *str);
int my_atoi(char *str);
void my_print(char *str, ...);
void write_int(int i);
void write_str(char *str);
char *my_ftoa(float i);
void fwrite_int(int i, int fd);
void fwrite_str(char *str, int fd);
void my_fprint(char *path, int flags, char *str, ...);
void my_errprint(char *str, ...);
int my_index_of_char(char *str, char c);
int my_index_of_str(char *str, char *tofind);
int my_power(int nb, int p);
char *my_base_changer(char *in, int in_base, int out_base);
int *my_sort(int *array, int size);

#endif // !UTLIS_H_