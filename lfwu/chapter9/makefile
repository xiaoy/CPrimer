include ../Make.Defines

PROGS=4_find_value.exe 5_find_value.exe 14_assign_str.exe 15_cmp_vec.exe

all:${PROGS}

%.exe : %.o
	${CXX} ${CXXFLAGS} -o $@ $<
%.o : %.cc
	${CXX} ${CXXFLAGS} -c $< -o $@

clean:
	rm -f ${PROGS}
