include ../../Make.Defines
all:main.exe
objects=main.o mystring.o

main.exe : ${objects}
	${CXX} ${CXXFLAGS} -o $@ ${objects}

main.o : main.cc
	${CXX} ${CXXFLAGS} -o $@ -c $<

mystring.o : mystring.cc
	${CXX} ${CXXFLAGS} -o $@ -c $<

clean:
	rm -f *.o *.exe
