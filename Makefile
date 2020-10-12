MINGW_VERSION=4.7.0
FOLDER=C:

all:main.exe 

Empregado.o: Empregado.cpp Empregado.hpp
	g++ -c -g -Wall Empregado.cpp
	
Vendedor.o: Vendedor.cpp Vendedor.hpp 
	g++ -c -g -Wall Vendedor.cpp

Engenheiro.o: Engenheiro.cpp Engenheiro.hpp
	g++ -c -g -Wall Engenheiro.cpp

main.exe:Vendedor.o Engenheiro.o Empregado.o main.cpp
	g++ -g -Wall  main.cpp Vendedor.o Engenheiro.o Empregado.o -o main.exe

run:
	./main.exe < Entrada.txt

clean:
	rm x.txt
	rm main.exe
	rm Vendedor.o
	rm Engenheiro.o
	



