include ../../Make.Defines

all=main.exe
objects=main.o str_vec.o

main.exe : ${objects}
	${CXX} ${CXXFLAGS} -o $@ ${objects}

main.o : main.cc
	${CXX} ${CXXFLAGS} -o $@ -c $<

str_vec.o : str_vec.cc
	${CXX} ${CXXFLAGS} -o $@ -c $<

clean:
	rm -f *.o *.exe
