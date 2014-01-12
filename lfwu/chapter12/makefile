include ../Make.Defines

PROGS= 6_print_vec.exe 7_print_vec.exe 14_shared_del.exe 23_concat_str.exe 26_read_str.exe\
	   text_query.exe

all:${PROGS}

%.exe : %.o
	${CXX} ${CXXFLAGS} -o $@ $<
%.o : %.cc
	${CXX} ${CXXFLAGS} -c $< -o $@

clean:
	rm -f ${PROGS}
