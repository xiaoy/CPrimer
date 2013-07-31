PROGS = hello
all: ${PROGS}

hello:Hello.o
	g++ -Wall -o ./bin/$@ $<

clean:
	rm -f *.o ./bin/${PROGS}
