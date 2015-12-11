####################################
#                                  
# Makefile for LargeNumber library 
#                                  
# $Author: Kenny Dow               
# $Revision: 1.0                   
# $Date: 2014/09/29                
# $Last modify: 2015/12/08
#

CC = gcc
CXX = g++
FLAGS = -ggdb -Wall -O3

usage:
	@echo "Usage: make { clean | all | archive }"
	@echo
	@echo "clean	- Delete all objs, binaries and archive"
	@echo "all	- Build the LargeNumber and test program"
	@echo "archive	- Build a static library for LargeNumber"
	@echo "shared	- Build a shared library for LargeNumber"
	@echo

all: LargeNumber.o main.o
	$(CXX) $(FLAGS) -o run LargeNumber.o main.o

shared: LargeNumber.cpp
	$(CXX) $(FLAGS) -fpic -c LargeNumber.cpp
	$(CXX) $(FLAGS) -shared -o libLN.so LargeNumber.o

archive: LargeNumber.o
	ar rvs LargeNumber.a LargeNumber.o

main.o: main.cpp
	$(CXX) $(FLAGS) -c main.cpp

LargeNumber.o: LargeNumber.h LargeNumber.cpp
	$(CXX) $(FLAGS) -c LargeNumber.cpp
dep:
	echo "Do nothing"
clean:
	rm -f run *.o *.gch *.a *.so
