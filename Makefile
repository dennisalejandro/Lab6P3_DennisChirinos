frac:	main.cpp Numero.cpp Binario.cpp Hex.cpp Oct.cpp
	g++ -std=c++11 main.cpp Numero.cpp Binario.cpp Hex.cpp Oct.cpp

main.o:	main.cpp Numero.cpp
	g++ -c main.cpp Numero.cpp

Pet.o:	main.cpp Numero.cpp
	g++ -c main.cpp Numero.cpp

Persona.o:	main.cpp Numero.cpp
	g++ -c main.cpp Numero.cpp

clean:
	rm *.o frac
