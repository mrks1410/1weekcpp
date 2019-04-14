all: sample.o main.cpp
	g++ main.o sample.o

main.o: main.cpp
	g++ -c main.cpp

sample.o: sample.cpp
	g++ -c sample.cpp
