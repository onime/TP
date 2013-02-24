#include "Livre.hpp"


void Livre::afficherDocument()
{
    cout << "Editeur : " << editeur << " en " << annee<<endl;
   
    Document::afficherDocument();    
}

Livre* Livre::clone()
{

    return new Livre(titre,auteur,resume,editeur,annee);
}

void Livre::coutDoc()
{
    cout << "Big Fuck";

}
