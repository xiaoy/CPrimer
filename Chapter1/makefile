PROGS = hello reverse
all: ${PROGS}

hello:Hello.o
	g++ -Wall -o ./bin/$@ $<

reverse:reverse.o
	g++ -Wall -o ./bin/$@ $<

clean:
	rm -f *.o ./bin/${PROGS}
