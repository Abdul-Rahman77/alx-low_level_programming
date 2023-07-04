#!/bin/bash
read -p "Filename: " file
cd 0x07-pointers_arrays_strings
vi $file.c

betty $file.c

read -p "main: " main
vi $main-main.c

clear

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 $main-main.c $file.c -o $file
./$file

cd ..

./script.sh
