PROJECT = reverseFile
CXX = g++
CXXFLAGS = -Wall -Wextra
SRC = main.cpp reverseFile.cpp
OBJ = $(SRC:.cpp=.o)

.PHONY: all clean cleanall

all: $(PROJECT)

$(PROJECT): $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

%.o: %.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)

clean:
	rm -f $(OBJ)

cleanall:
	rm -f $(OBJ) $(PROJECT)
