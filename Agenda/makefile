

main:	Agenda.o Entree.o Tableau.o main.o
	g++ main.o Agenda.o Entree.o Tableau.o -o main

Agenda.o: Agenda.cpp
	g++ -c Agenda.cpp

main.o: main.cpp
	g++ -c main.cpp

Entree.o: Entree.cpp
	g++ -c Entree.cpp

Tableau.o: Tableau.cpp
	g++ -c Tableau.cpp

clean:
	rm *.o