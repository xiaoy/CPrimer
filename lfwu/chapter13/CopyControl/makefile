include ../../Make.Defines

all=main.exe
objects= main.o message.o folder.o
main.exe : ${objects}
	${CXX} ${CXXFLAGS} -o $@ ${objects}

main.o : main.cc
	${CXX} ${CXXFLAGS} -o $@ -c $<

message.o : message.cc
	${CXX} ${CXXFLAGS} -o $@ -c $<

folder.o : folder.cc
	${CXX} ${CXXFLAGS} -o $@ -c $<

clean:
	rm -f *.exe *.o
