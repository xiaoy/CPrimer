include ../../Make.Defines

PROGS=main

all:${PROGS}
objects=text_query.o text_query_result.o main.o util.o
main : ${objects}
	${CXX} ${CXXFLAGS} -o $@ ${objects}

objects : %.cc
	${CXX} ${CXXFLAGS} -o $@ -c $<

clean:
	rm ${PROGS} ${objects}
