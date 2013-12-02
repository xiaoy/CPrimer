include ../Make.Defines
PROGS=1readstr
all:${PROGS}

1readstr : 1readstr.o
	${CXX} ${CXXFLAGS} -o $@ $<

clean:
	rm -f *.o ${PROGS}
