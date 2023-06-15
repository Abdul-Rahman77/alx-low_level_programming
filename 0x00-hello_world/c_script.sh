#!/bin/bash
read -p "Filename: " fname
echo -e "#!/bin/bash\n" > $fname
vi $fname
chmod u+x $fname
./$fname
git add .
read -p "Commit message: " msg
echo "$fname - $msg" >> README.md
git commit -m "$msg"
git push origin master
clear
./c_script.sh
