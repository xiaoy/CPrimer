include ../Make.Defines

PROGS= 1_count_val.exe 2_count_val.exe 3_acumulate.exe 6_fill.exe 9_elim_dump.exe \
	   11_sort.exe 12_item_sort.exe 13_part.exe

all:${PROGS}

%.exe : %.o
	${CXX} ${CXXFLAGS} -o $@ $<
%.o : %.cc
	${CXX} ${CXXFLAGS} -c $< -o $@

clean:
	rm -f ${PROGS}
