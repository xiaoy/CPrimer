include ../Make.Defines

PROGS=4_find_value.exe 5_find_value.exe 14_assign_str.exe 15_cmp_vec.exe \
	  16_cmp_list.exe 18_read_str.exe 19_read_str.exe 20_split_list.exe

all:${PROGS}

%.exe : %.o
	${CXX} ${CXXFLAGS} -o $@ $<
%.o : %.cc
	${CXX} ${CXXFLAGS} -c $< -o $@

clean:
	rm -f ${PROGS}
