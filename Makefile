all: main

main: main.o MemoryManager.o TaskPredictor.o
	g++ main.o MemoryManager.o TaskPredictor.o -o main

main.o: main.cpp
	g++ -c main.cpp

MemoryManager.o: MemoryManager.cpp
	g++ -c MemoryManager.cpp

TaskPredictor.o: TaskPredictor.cpp
	g++ -c TaskPredictor.cpp

clean:
	rm -f *.o main
