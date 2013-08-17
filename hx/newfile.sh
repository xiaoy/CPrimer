#! /bin/bash
if [ $# -ne 2 ]
then
    echo "please input the file-name,format like './newfile.sh directory filename'"
    exit 0
fi

if [ ! -d "$1" ]
then
    mkdir "$1"
fi

if [ ! -f "$1\/$2" ]
then
    touch $1\/$2
    . ./title.sh>>$1\/$2 
fi

