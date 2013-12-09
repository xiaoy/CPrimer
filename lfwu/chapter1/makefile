include ../Make.Defines
PROGS=20_read_item.exe 21_add_item.exe
all:${PROGS}
%.o : %.cc
	${CXX} ${CXXFLAGS} -c $< -o $@
%.exe:%.o
	${CXX} ${CXXFLAGS} -o $@ $<

clean:
	rm -f *.o *.exe ${PRGOS}
