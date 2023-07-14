#!/bin/bash
read -p "Filename: " file
vi $file

betty $file

read -p "main: " main
vi $main-main.c

read -p "output file: " out
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 $main-main.c $file -o $out
./$out
