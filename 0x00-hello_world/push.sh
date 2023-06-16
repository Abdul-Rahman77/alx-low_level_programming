#!/bin/bash
git add .
read -p "Commit message: " msg
echo "$fname - $msg" >> README.md
git commit -m "$msg"
git push origin master
clear
./c_script.sh
