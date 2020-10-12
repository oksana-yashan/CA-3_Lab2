all: main

main: main.o calculator.a 
	g++ main.o calculator.a -o main  

main.o: main.cpp
	g++ -c main.cpp

calculator.a : calculator.o
	ar rvs calculator.a calculator.o

calculator.o: calculator.cpp
	g++ -c calculator.cpp


clean:
	rm -rf *o main