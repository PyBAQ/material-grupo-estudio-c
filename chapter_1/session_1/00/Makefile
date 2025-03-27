# Variables
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -Iinclude
SRC = src/main.cpp src/utils.cpp
OBJ = $(SRC:src/%.cpp=obj/%.o)
BIN = bin/mi_proyecto

# Regla principal
all: $(BIN)

# Regla para compilar
$(BIN): $(OBJ)
	@mkdir -p bin
	$(CXX) $(CXXFLAGS) $^ -o $@

# Regla para compilar objetos
obj/%.o: src/%.cpp
	@mkdir -p obj
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar archivos compilados
clean:
	rm -rf obj bin

.PHONY: all clean


