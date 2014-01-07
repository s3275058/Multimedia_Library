CXX = $(shell wx-config --cxx)
 
 PROGRAM = ass2.out
 
OBJECTS := $(patsubst %.cpp,%.o,$(wildcard src/*.cpp))
 
 # implementation
 
 .SUFFIXES:     .o .cpp
 
 .cpp.o :
	$(CXX) -c `wx-config --libs --cxxflags` -o $@ $< -lsqlite3 -std=c++11 
 
 all:    $(PROGRAM)
 
 $(PROGRAM):     $(OBJECTS)
	$(CXX) -o $(PROGRAM) $(OBJECTS) `wx-config --libs --cxxflags` -lsqlite3 -std=c++11 
 
 clean:
	rm -f src/*.o $(PROGRAM)
