PROJECT = transformers_test
CXX = g++
CXXFLAGS = -Wall -Wextra -pthread 
GTEST_LIBS = -lgtest -lgtest_main -pthread 
SRC = Gun.cpp Battlefield.cpp Transformer.cpp Autobot.cpp Maximal.cpp Decepticon.cpp transformers_test.cpp
OBJ = $(SRC:.cpp=.o)

.PHONY: all clean cleanall

all: $(PROJECT)

$(PROJECT): $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS) $(GTEST_LIBS) 

%.o: %.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)

clean:
	rm -f $(OBJ)

cleanall:
	rm -f $(OBJ) $(PROJECT)

