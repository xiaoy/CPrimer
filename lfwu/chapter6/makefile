include ../Make.Defines
PROGS=27_initializer 33_PrintVec

all:${PROGS}

27_initializer:27_initializer.o
	${CXX} ${CXXFLAGS} -o $@ $<

33_PrintVec:33_PrintVec.o
	${CXX} ${CXXFLAGS} -o $@ $<

clean:
	rm -f *.o ${PROGS}
