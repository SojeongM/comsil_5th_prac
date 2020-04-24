CXX = g++
CPPFLAGS = -g -c

target = main
objects = main.o array.o rangearray.o
SRC = main.cpp array.cpp rangearray.cpp

$(target) : $(objects)
	$(CXX) -o $(target) $(objects)


main.o Array.o RangeArray.o : RangeArray.h Array.h

clean :
	rm $(target) $(objects)	
