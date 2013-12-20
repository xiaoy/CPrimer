include ../../base/Make.Defines

CXXPROGS= forloop 

all:${CXXPROGS}




forloop:forloop.o 
	${CXX} ${CXXFLAGS} -o $@ $<
clean:
	rm -f -r *.o ${CXXPROGS}
