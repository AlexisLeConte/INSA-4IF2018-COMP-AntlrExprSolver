# Compiler Options
CXX       = g++
CXX_FLAGS = -std=c++11 -Wall -Wextra -O3
INCLUDE   = /usr/local/lib/antlr4/include/antlr4-runtime/

# Linker Options
LIBS = /usr/local/lib/antlr4/lib/libantlr4-runtime.a

# Project files
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
BIN = solver

.PHONY: clean remake

all: $(BIN)

$(BIN): $(OBJ)
	@ $(CXX) -I $(INCLUDE) $(CXX_FLAGS) -o $@ $^ $(LIBS)

%.o: %.cpp
	@ $(CXX) -c -I $(INCLUDE) $(CXX_FLAGS) -o $@ $<

clean:
	@ rm -f $(OBJ) $(BIN)

remake: clean all
