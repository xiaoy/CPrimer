include ../Make.Defines
CXXPROGS= 4strcmp

all:${CXXPROGS}

4strcmp : 4strcmp.o
	${CXX} ${CXXFLAGS} -o ./bin/$@ $<

clean:
	rm -f -r *.o
	rm ./bin/${CXXPROGS}
