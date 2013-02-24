

main:	 Biblio.o Article.o Livre.o Document.o mainDocument.o
	g++  mainDocument.o Biblio.o Article.o Livre.o  Document.o  -o main

mainDocument.o:
	g++ -c mainDocument.cpp

Biblio.o:
	g++ -c Biblio.cpp

Document.o: Document.cpp
	g++ -c Document.cpp

Livre.o: Livre.cpp 
	g++ -c Livre.cpp

Article.o: Article.cpp

	g++ -c Article.cpp

clean:
	rm *.o 
