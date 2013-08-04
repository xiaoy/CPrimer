include ../Make.Defines
CXXPROGS= 4strcmp 5strconcat 6strupper 10delpunct 17vecupper \
		  arr

all:${CXXPROGS}

4strcmp : 4strcmp.o
	${CXX} ${CXXFLAGS} -o $@ $<

5strconcat : 5strconcat.o
	${CXX} ${CXXFLAGS} -o $@ $<

6strupper : 6strupper.o
	${CXX} ${CXXFLAGS} -o $@ $<

10delpunct : 10delpunct.o
	${CXX} ${CXXFLAGS} -o $@ $<

17vecupper : 17vecupper.o
	${CXX} ${CXXFLAGS} -o $@ $<

arr : arr.o
	${CXX} ${CXXFLAGS} -o $@ $<

clean:
	rm -f -r *.o ${CXXPROGS}
