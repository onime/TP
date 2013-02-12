#include "Livre.hpp"


void Livre::afficherDocument()
{
    cout << "Editeur : " << editeur << " en " << annee<<endl;
   
    Document::afficherDocument();    
}

Livre Livre::clone()
{

    return Livre(titre,auteur,resume,editeur,annee);
}
