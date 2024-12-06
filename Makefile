CXX = g++
CXXFLAGS = -std=c++20 -O3 -Wall -Wextra -pedantic

default:
	$(CXX) -c $(CXXFLAGS) -I include src/*.cpp
