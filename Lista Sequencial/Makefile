# Nome do compilador
CXX = g++

# Opções do compilador
CXXFLAGS = -Wall -Wextra -std=c++11

# Arquivo do projeto
OBJ = main.o

# Nome do executável
TARGET = programa

# Regra padrão para compilar o projeto
all: $(TARGET)

# Regra para compilar o executável
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Compila main.cpp
main.o: main.cpp lista.h
	$(CXX) $(CXXFLAGS) -c main.cpp

# Limpeza dos arquivos compilados
clean:
	rm -f *.o $(TARGET)
