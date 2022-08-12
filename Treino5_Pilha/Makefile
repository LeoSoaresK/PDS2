#Uma maneira de compilar o arquivo pilha.cpp seria com o comando
# c++ -c scr/pilha.cpp -I include/

#Essa maneira refere-se à compilação com terminal de endereço no arquivo fonte "./"
#Por isso, o diretório do arquivo pilha.cpp foi especificado

#Contudo, no código de pilha.cpp, há um comando #include "pilha.h"
#Este comando não funciona pois o arquivo não se encontra no mesmo diretório
#Isso pode ser resolvido com o parametro "-I include", que especifica onde o include sera encontrado

#Para controlar o local de criacao do programa gerado na compilacao, usar o parametro -o
#O comando completo ficaria

#c++ -c src/pilha.cpp -I include/ -o build/pilha.o

#Outra maneira seria usar o Makefile

all: main build

build: build/main.o build/pilha.o

main: build/main.o build/pilha.o 
	c++ build/main.o build/pilha.o -o main

build/main.o: src/main.cpp include/pilha.h
	c++ -c src/main.cpp -I include/ -o build/main.o

build/pilha.o: src/pilha.cpp include/pilha.h
	c++ -c src/pilha.cpp -I include/ -o build/pilha.o

debug: build/main.o build/pilha.o 
	c++ -g build/*.o -o main

clean:
	rm build/*.o main

#O parametro -g eh para debugar
#Para executar, digite "make" no terminal