#ifndef ARTICLE_H
#define ARTICLE_H

#include <string>
#include "Document.h"

using namespace std;

class Article: public Document
{
protected:

    string titre_revue;
    string editeur;
    int num_edition;

public:
    Article(string & titre,string auteur,string * resume,string titre_revue, string editeur,int num_edition):Document(titre,auteur,resume)
    {
	this->titre_revue = titre_revue;
	this-> editeur = editeur;
	this-> num_edition = num_edition;
    }

    Article(const Article &a):Document(a.titre,a.auteur,a.resume)
    {
	this->titre_revue = a.titre_revue;
	this->editeur = a.editeur;
	this->num_edition = a.num_edition;
    }
    Article & operator=(Article const& a);

    void afficherDocument();
    Article clone();
};

#endif
