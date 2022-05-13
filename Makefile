TRGDIR=./
OBJ=./obj
CPPFLAGS= -c -g -Wall -pedantic -std=c++17 -iquote inc

__start__: pri.out
	./pri.out

pri.out: ${OBJ} ${OBJ}/main.o ${OBJ}/queue.o
	g++ -o pri.out ${OBJ}/main.o ${OBJ}/queue.o -lpthread

${OBJ}:
	mkdir ${OBJ}

${OBJ}/main.o: src/main.cpp inc/queue.hh
	g++ ${CPPFLAGS} -o ${OBJ}/main.o src/main.cpp

${OBJ}/queue.o: src/queue.cpp inc/queue.hh inc/node.hh
	g++ ${CPPFLAGS} -o ${OBJ}/queue.o src/queue.cpp

clear:
	rm -f pri.out ${OBJ}/*
