include ../Make.Defines

PROGS=4_find_value.exe 5_find_value.exe 14_assign_str.exe 15_cmp_vec.exe \
	  16_cmp_list.exe 18_read_str.exe 19_read_str.exe 20_split_list.exe \
	  24_visit_vec.exe 26_erase.exe 27_erase.exe 28_insert.exe 29_duplicate.exe \
	  41_init_str.exe 43_replace.exe 44_replace.exe 45_insert.exe 46_insert.exe \
	  47_find_str.exe 49_find_str.exe 50_str_sum.exe

all:${PROGS}

%.exe : %.o
	${CXX} ${CXXFLAGS} -o $@ $<
%.o : %.cc
	${CXX} ${CXXFLAGS} -c $< -o $@

clean:
	rm -f ${PROGS}
