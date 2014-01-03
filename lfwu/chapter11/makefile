include ../Make.Defines

PROGS=3_words_count.exe 4_words_count.exe 7_add_name.exe 12_pair.exe 14_add_name.exe

all:${PROGS}

%.exe : %.o
	${CXX} ${CXXFLAGS} -o $@ $<
%.o : %.cc
	${CXX} ${CXXFLAGS} -c $< -o $@

clean:
	rm -f ${PROGS}
