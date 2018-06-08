exe:	main.o Oviraptor.o Triceratops.o Spinosaurus.o TREX.o cuidador.o Marinos.o Aereos.o Omnivoros.o Herbivoros.o Carnivoros.o Dinosaurios.o
	g++ main.o Oviraptor.o Triceratops.o Spinosaurus.o TREX.o cuidador.o Marinos.o Aereos.o Omnivoros.o Herbivoros.o Carnivoros.o Dinosaurus.o -o exe
main.o: main.cpp Oviraptor.h Triceratops.h Spinosaurus.h TREX.h cuidador.h Marinos.h Aereos.h Omnivoros.h Herbivoros.h Carnivoros.h Dinosaurios.h
	g++ -c main.cpp
Oviraptor.o:	Oviraptor.cpp Oviraptor.h Dinosaurios.h Omnivoros.h
	g++ -c Oviraptor.cpp
Triceratops.o:	Triceratops.cpp Triceratops.h Dinosaurios.h Herbivoros.h
	g++ -c Triceratops.cpp
Spinosaurus.o:	Spinosaurus.cpp Spinosaurus.h Dinosaurios.h Carnivoros.h
	g++ -c Spinosaurus.cpp
TREX.o:	TREX.cpp TREX.h Dinosaurios.h Carnivoros.h
	g++ -c TREX.cpp
cuidador.o:	cuidador.cpp cuidador.h Dinosaurios.h
	g++ -c cuidador.cpp
Marinos.o:	Marinos.cpp Marinos.h Dinosaurios.h
	g++ -c Marinos.cpp
Aereos.o:	Aereos.cpp Aereos.h Dinosaurios.h
	g++ -c Aereos.cpp
Omnivoros.o:	Omnivoros.cpp Omnivoros.h Dinosaurios.h
	g++ -c Omnivoros.cpp
Herbivoros.o:	Herbivoros.cpp Herbivoros.h Dinosaurios.h
	g++ -c Herbivoros.cpp
Carnivoros.o:   Carnivoros.cpp  Carnivoros.h Dinosaurios.h
	g++ -c Carnivoros.cpp
Dinosaurios.o:   Dinosaurios.cpp Dinosaurios.h
	g++ -c Dinosaurio.cpp
