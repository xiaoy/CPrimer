#!/bin/sh
if [ $# -ne 1 ]
then
    echo "wrong args"
    exit 0
fi

if [ ! -f "$1.cpp" ]
then
    echo "there isnot exist the file,please ensure the filename or file";
else
   rm -rf $1.cpp;
   rm -rf $1.o;
   rm -rf $1;
   #cp -r makefile ./makefile_bak
   sed -i '/CXXPROGS=/s/'$1'//g' makefile
   sed -i /$1\:$1.o/,/\$/d makefile
fi


