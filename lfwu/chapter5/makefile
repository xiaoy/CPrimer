include ../Make.Defines
PROGS=10_vowels_count 12_symbols_count 13_dsymbols 14_wordstatistic \
	  17_prefix 23_divide

all:${PROGS}

10_vowels_count : 10_vowels_count.o
	${CXX} ${CXXFLAGS} -o $@ $<

12_symbols_count: 12_symbols_count.o
	${CXX} ${CXXFLAGS} -o $@ $<
	
13_dsymbols: 13_dsymbols.o
	${CXX} ${CXXFLAGS} -o $@ $<

14_wordstatistic : 14_wordstatistic.o
	${CXX} ${CXXFLAGS} -o $@ $<
	
17_prefix: 17_prefix.o
	${CXX} ${CXXFLAGS} -o $@ $<

23_divide: 23_divide.o
	${CXX} ${CXXFLAGS} -o $@ $<
clean:
	rm -f *.o ${PROGS}
