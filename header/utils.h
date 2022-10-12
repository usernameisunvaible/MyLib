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
void my_revstr(char *str);
int my_atoi(char *str);
void my_print(char *str, ...);
void write_int(int i);
void write_str(char *str);
char *my_ftoa(float i);
void fwrite_int(int i, int fd);
void fwrite_str(char *str, int fd);
void my_fprint(char *path, int flags, char *str, ...);
void my_errprint(char *str, ...);


#endif // !UTLIS_H_