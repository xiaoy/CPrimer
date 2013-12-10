include ../Make.Defines

PROGS = 1readstr.exe 4readfile.exe 5readword.exe 6_read_transaction.exe \
		7_rw_transaction.exe 8_rw_transaction.exe 9_print_stringstream.exe \
		10_read_file.exe

all:${PROGS}

%.exe : %.o
	${CXX} ${CXXFLAGS} -o $@ $<
%.o : %.cc
	${CXX} ${CXXFLAGS} -c $< -o $@

clean:
	rm -f ${PROGS}
