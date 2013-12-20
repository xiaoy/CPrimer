#! /bin/bash
if [ $# -ne 1 ]
then
    echo "wrong args"
    exit 0
fi

if [ ! -f "$1" ]
then
    touch $1.cpp
    . ../../base/title.sh>>$1.cpp
fi

#sed -i '/all:/i\'$1'\ \\' makefile
sed -i '/CXXPROGS=/s/$/&'$1' /g' makefile
sed -i '/clean:/i\'$1\:$1.o\  makefile
sed -i '/clean:/i\\	${CXX} ${CXXFLAGS} -o $@ $<' makefile
