include ../Make.Defines
PROGS=isodd 22_grade
all:${PROGS}

isodd : isodd.o
	${CXX} ${CXXFLAG} -o $@ $<

22_grade : 22_grade.o
	${CXX} ${CXXFLAG} -o $@ $<

clean:
	rm -f *.o ${PROGS}
