TRGDIR=./
OBJ=./obj
CPPFLAGS= -c -g -Wall -pedantic -std=c++17 -iquote inc

__start__: rank.out
	./rank.out

rank.out: ${OBJ} ${OBJ}/main.o ${OBJ}/MovieList.o
	g++ -o rank.out ${OBJ}/main.o ${OBJ}/MovieList.o -lpthread

${OBJ}:
	mkdir ${OBJ}

${OBJ}/main.o: src/main.cpp inc/MovieList.hh
	g++ ${CPPFLAGS} -o ${OBJ}/main.o src/main.cpp

${OBJ}/MovieList.o: src/MovieList.cpp inc/MovieList.hh inc/node.hh
	g++ ${CPPFLAGS} -o ${OBJ}/MovieList.o src/MovieList.cpp

clear:
	rm -f rank.out ${OBJ}/*
