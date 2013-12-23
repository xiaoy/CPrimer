include ../../base/Make.Defines

CXXPROGS= forloop express formore bigstep forstr1 plus_one block block2 forstr2 

all:${CXXPROGS}




forloop:forloop.o 
	${CXX} ${CXXFLAGS} -o $@ $<
express:express.o 
	${CXX} ${CXXFLAGS} -o $@ $<
formore:formore.o 
	${CXX} ${CXXFLAGS} -o $@ $<
bigstep:bigstep.o 
	${CXX} ${CXXFLAGS} -o $@ $<
forstr1:forstr1.o 
	${CXX} ${CXXFLAGS} -o $@ $<
plus_one:plus_one.o 
	${CXX} ${CXXFLAGS} -o $@ $<
block:block.o 
	${CXX} ${CXXFLAGS} -o $@ $<
block2:block2.o 
	${CXX} ${CXXFLAGS} -o $@ $<
forstr2:forstr2.o 
	${CXX} ${CXXFLAGS} -o $@ $<
clean:
	rm -f -r *.o ${CXXPROGS}
