#!/bin/bash
git add .

read -p "Commit: " com
git commit -m "$com"

git push origin master
