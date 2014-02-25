include ../../Make.Defines

PROG=main
all:${PROG}
object=main.o StrBlob.o StrBlobPtr.o
main : ${object}
	${CXX} ${CXXFLAGS} -o $@ ${object}

main.o : main.cc
	${CXX} ${CXXFLAGS} -c $< -o $@

StrBlob.o : StrBlob.cc
	${CXX} ${CXXFLAGS} -c $< -o $@

StrBlogPtr.o : StrBlobPtr.cc
	${CXX} ${CXXFLAGS} -c $< -o $@

clean:
	rm *.o ${PROG}

