include ../Make.Defines

PROGS=3_words_count.exe 4_words_count.exe 7_add_name.exe 12_pair.exe 14_add_name.exe \
	  18_words.exe 20_words_count.exe 22_insert.exe 23_add_name.exe 31_erase_element.exe\
	  32_print_map.exe 33_transform.exe

all:${PROGS}

%.exe : %.o
	${CXX} ${CXXFLAGS} -o $@ $<
%.o : %.cc
	${CXX} ${CXXFLAGS} -c $< -o $@

clean:
	rm -f ${PROGS}
