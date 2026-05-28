CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra
TARGET = cycle_test

$(TARGET): solution.cpp test_solution.cpp solution.h
	$(CXX) $(CXXFLAGS) -o $(TARGET) solution.cpp test_solution.cpp

test: $(TARGET)
	./$(TARGET)

.PHONY: test
