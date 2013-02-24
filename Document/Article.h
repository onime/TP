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
    virtual void coutDoc();

     Article(string & titre,string auteur,string * resume,string titre_revue, string editeur,int num_edition);

    Article(const Article &a);

    Article & operator=(Article const& a);

    void afficherDocument();
    Article* clone();
};

#endif
