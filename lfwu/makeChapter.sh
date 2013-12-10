if [ $# -ne 1 ]
then
    echo "wrong argument"
    exit 0
fi

mkDoc="chapter$1"

mkdir $mkDoc

mkdir "$mkDoc/data"

echo "include ../Make.Defines" >> $mkDoc\/makefile
echo -e "\nPROGS=\n" >> $mkDoc\/makefile
echo -e "all:\${PROGS}\n" >>$mkDoc\/makefile

echo "%.exe : %.o" >>$mkDoc\/makefile
echo -e "\t\${CXX} \${CXXFLAGS} -o \$@ \$<" >>$mkDoc\/makefile
echo "%.o : %.cc" >>$mkDoc\/makefile
echo -e "\t\${CXX} \${CXXFLAGS} -c \$< -o \$@" >>$mkDoc\/makefile

echo -e "\nclean:" >>$mkDoc\/makefile
echo -e "\trm -f \${PROGS}" >>$mkDoc\/makefile

