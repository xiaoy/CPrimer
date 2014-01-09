include ../../Make.Defines

PROG=main
all:${PROG}
object=main.o StrBlob.o
main : ${object}
	${CXX} ${CXXFLAGS} -o $@ ${object}

main.o : main.cc
	${CXX} ${CXXFLAGS} -c $< -o $@

Strblob.o : StrBlob.cc
	${CXX} ${CXXFLAGS} -c $< -o $@

clean:
	rm *.o ${PROG}

