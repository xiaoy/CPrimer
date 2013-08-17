include ../../Make.Defines

CXXPROGS=limits arith exceed hexoct \
	chartype floatnum modulus assign \
	exercise-371

all:${CXXPROGS}

limts :limts.o
	${CXX} ${CXXFLAGS} -o $@ $<

arith:arith.o
	${CXX} ${CXXFLAGS} -o $@ $<

exceed:exceed.o
	${CXX} ${CXXFLAGS} -o $@ $<

hexoct:hexoct.o
	${CXX} ${CXXFLAGS} -o $@ $<

chartype:chartype.o
	${CXX} ${CXXFLAGS} -o $@ $<

floatnum:floatnum.o
	${CXX} ${CXXFLAGS} -o $@ $<

modulus:modulus.o
	${CXX} ${CXXFLAGS} -o $@ $<

assgin:assign.o
	${CXX} ${CXXFLAGS} -o $@ $<

exercise-371:exercise-371.o
	${CXX} ${CXXFLAGS} -o $@ $<

clean:
	rm -f -r *.o ${CXXPROGS}

