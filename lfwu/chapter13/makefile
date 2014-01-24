include ../Make.Defines

PROGS=14_numbered.exe 29_has_ptr.exe 30_has_ptr.exe 31_has_ptr_sort.exe

all:${PROGS}

%.exe : %.o
	${CXX} ${CXXFLAGS} -o $@ $<
%.o : %.cc
	${CXX} ${CXXFLAGS} -c $< -o $@

clean:
	rm -f ${PROGS}
