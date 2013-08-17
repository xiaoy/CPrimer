#! /bin/bash
if [ $# -ne 1 ]
then
    echo "wrong args"
    exit 0
fi

if [ ! -f "$1" ]
then
    touch $1
    . ../../title.sh>>$1
fi

