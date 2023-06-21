#!/bin/bash
read -p "Filename: " fname
vi $fname.c
read -p "_-main: " num
cp 1-main.c $num-main.c
vi $num-main.c

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c $num-main.c $fname.c -o $fname
./$fname

git add .
read -p "Commit message: " msg
echo -e "#$fname.c - $msg" >> README.md
git commit -m "$msg"
git push origin master

clear
./c_files.sh
