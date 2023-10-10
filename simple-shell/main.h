#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

int _putchar(char c);
void printString(char *str);
int _strlen(char *str);
char *getCommand();
void print_error(char *error_message);
void execute_command(char *command);
int _strcmp(char *str1, char *str2);

#endif
