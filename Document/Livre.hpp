#ifndef LIVRE_H
#define LIVRE_H

#include <string>
#include "Document.h"

using namespace std;

class Livre: public Document 
{
protected:
    string editeur;
    int annee;
  
public:
    Livre(string & titre,string auteur, string *resume,string editeur, int annee):Document(titre,auteur,resume)
    {  
	this->editeur = editeur;
	this->annee = annee;
    }
    
    Livre(const Livre & l):Document(l.titre,l.auteur,l.resume)
    {
	editeur = l.editeur;
	annee = l.annee;
    }
    
    virtual void coutDoc();
    
    void afficherDocument();
    Livre* clone();

};

#endif
