include ../../base/Make.Defines

CXXPROGS= arrayone nullChar string instr1 instr2 instr3 numstr strtype1 

all:${CXXPROGS}




arrayone:arrayone.o 
	${CXX} ${CXXFLAGS} -o $@ $<
nullChar:nullChar.o 
	${CXX} ${CXXFLAGS} -o $@ $<
string:string.o 
	${CXX} ${CXXFLAGS} -o $@ $<
instr1:instr1.o 
	${CXX} ${CXXFLAGS} -o $@ $<
instr2:instr2.o 
	${CXX} ${CXXFLAGS} -o $@ $<
instr3:instr3.o 
	${CXX} ${CXXFLAGS} -o $@ $<
numstr:numstr.o 
	${CXX} ${CXXFLAGS} -o $@ $<
strtype1:strtype1.o 
	${CXX} ${CXXFLAGS} -o $@ $<
clean:
	rm -f -r *.o ${CXXPROGS}
