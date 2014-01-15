include ../Make.Defines

PROGS=14_numbered.exe

all:${PROGS}

%.exe : %.o
	${CXX} ${CXXFLAGS} -o $@ $<
%.o : %.cc
	${CXX} ${CXXFLAGS} -c $< -o $@

clean:
	rm -f ${PROGS}
