CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
TARGET = test_program
SOURCES = ../src/main.cpp

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

test: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: test clean