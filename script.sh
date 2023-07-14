#!/bin/bash
read -p "Filename: " file
cd 0x0C-more_malloc_free
emacs $file.c

betty $file.c

read -p "main: " main
emacs $main-main.c

clear

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 $main-main.c $file.c -o $file
./$file

cd ..

./script.sh
