include ../Make.Defines
PROGS=1readstr 4readfile 5readword
all:${PROGS}

1readstr : 1readstr.o
	${CXX} ${CXXFLAGS} -o $@ $<

4readfile : 4readfile.o
	${CXX} ${CXXFLAGS} -o $@ $<

5readfile : 5readfile.o
	${CXX} ${CXXFLAGS} -o $@ $<

clean:
	rm -f *.o ${PROGS}
