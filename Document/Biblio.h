#ifndef BIBLIO_H
#define BIBLIO_H

#include <list>
#include <iostream>
#include "Document.h"

using namespace std;

class Biblio
{
    list <Document*> tab;

public:
    
    Biblio();
    Biblio(Document *D);
    void ajouter(Document *D);
    Document* rechercher(string T);
    void afficher();
    
   
};

#endif
