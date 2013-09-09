include ../Make.Defines
PROGS=10_vowels_count

all:${PROGS}

10_vowels_count : 10_vowels_count.o
	${CXX} ${CXXFLAGS} -o $@ $<

clean:
	rm -f *.o ${PROGS}
