include ../Make.Defines

PROGS= 1_count_val.exe 2_count_val.exe 3_acumulate.exe 6_fill.exe 9_elim_dump.exe \
	   11_sort.exe 12_item_sort.exe 13_part.exe 14_lambda.exe 15_lambda.exe\
	   16_lambda.exe 17_lambda.exe 18_lambda.exe 19_lambda.exe 20_count_if.exe\
	   21_caputure.exe 22_count.exe 24_find.exe 25_bind.exe 27_copy.exe 28_copy.exe\
	   29_stream.exe 30_stream.exe 31_stream.exe 32_stream.exe 33_stream.exe \
	   34_reverse.exe 35_reverse.exe 36_find_last.exe 37_rcopy.exe 42_elim_dump.exe

all:${PROGS}

%.exe : %.o
	${CXX} ${CXXFLAGS} -o $@ $<
%.o : %.cc
	${CXX} ${CXXFLAGS} -c $< -o $@

clean:
	rm -f ${PROGS}
