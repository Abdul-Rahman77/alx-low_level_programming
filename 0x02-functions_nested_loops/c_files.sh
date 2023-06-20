#!/bin/bash
read -p "Filename: " fname
vi $fname.c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 $fname.c -o $fname.exe
./$fname.exe

git add .
read -p "Commit message: " msg
echo -e "#$fname.c - $msg" >> README.md
git commit -m "$msg"
git push origin master

clear
./c_files.sh


