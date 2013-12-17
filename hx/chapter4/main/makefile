include ../../base/Make.Defines

CXXPROGS= arrayone 

all:${CXXPROGS}




arrayone:arrayone.o 
	${CXX} ${CXXFLAGS} -o $@ $<
clean:
	rm -f -r *.o ${CXXPROGS}
