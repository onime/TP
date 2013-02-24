#include "Biblio.h"
#include "Document.h"

using namespace std;

Biblio::Biblio()
{
    //   tab = list<Document>();
}

Biblio::Biblio(Document *D)
{
    tab.push_back(D);
}

void Biblio::ajouter(Document *D)
{
    tab.push_back(D);
}

Document* Biblio::rechercher(string T)
{
    for(std::list<Document*>::iterator it = tab.begin();it != tab.end(); it++)
	if( (*it)->get_titre() == T)
	    return *it;
    throw "Aucun titre";
}

void Biblio::afficher()
{
    for(std::list<Document*>::iterator it = tab.begin();it != tab.end(); it++)
	(*it)->afficherDocument();
}

