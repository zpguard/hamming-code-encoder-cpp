SOURCES = main.cpp hamming.cpp 
OBJECTS = main.o hamming.o
EXECUTABLE = hamming

hamming: main.cpp hamming.cpp
	g++ main.cpp hamming.cpp -I/usr/local/include/eigen/3.4.0_1/include/eigen3  -o hamming

run: hamming
	./hamming

%.o : %.cpp %.h
	g++ -c $<

clean:
	rm *.o $(EXECUTABLE)
	./make

