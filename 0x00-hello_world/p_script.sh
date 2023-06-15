#!/bin/bash
read -p "Filename: " fname
vi $fname
read -p "Output filename: " ofile
gcc $fname -o $ofile
./$ofile
git add .
read -p "Commit Message: " msg
git commit -m "$msg"
git push origin master
clear
./p_script.sh

