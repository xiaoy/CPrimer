#! /bin/bash
if [ $# -ne 1 ]
then
    echo "please input the file-name,just like './newDirectory.sh directory_name'"
    exit 0
fi

if [ ! -d "$1" ]
then
    mkdir "$1"
    mkdir $1\/main
    mkdir $1\/exercise
fi

cp base/newfile.sh $1\/main/
cp base/rmfile.sh $1\/main/
cp base/makefile $1\/main/
cp base/newfile.sh $1\/exercise/
cp base/rmfile.sh $1\/exercise/
cp base/makefile $1\/exercise/

