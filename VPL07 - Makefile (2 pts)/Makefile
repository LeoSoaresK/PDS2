CC = g++
CPPFLAGS = -I include

BUILD := $(CURDIR)/build/
VPATH = include::src/entidades::src
TARGET = vpl_execution

all: $(TARGET)

vpl_execution: ./build/Pessoa.o ./build/Funcionario.o ./build/Professor.o ./build/main.o
	$(CC) $(BUILD)Pessoa.o $(BUILD)Funcionario.o $(BUILD)Professor.o $(BUILD)main.o -o $@

./build/Pessoa.o: Pessoa.cpp
	$(CC) $(CPPFLAGS) -c $< -o $(BUILD)Pessoa.o

./build/Funcionario.o: Funcionario.cpp
	$(CC) $(CPPFLAGS) -c $< -o $(BUILD)Funcionario.o

./build/Professor.o: Professor.cpp
	$(CC) $(CPPFLAGS) -c $< -o $(BUILD)Professor.o

./build/main.o: main.cpp
	$(CC) $(CPPFLAGS) -c $^ -o $(BUILD)main.o