#include "Article.h"


Article::Article(string & titre,string auteur,string * resume,string titre_revue, string editeur,int num_edition):Document::Document(titre,auteur,resume)
{
    this->titre_revue = titre_revue;
    this-> editeur = editeur;
    this-> num_edition = num_edition;
    
}

Article::Article(const Article &a):Document::Document(a.titre,a.auteur,a.resume)
{
    this->titre_revue = a.titre_revue;
    this->editeur = a.editeur;
    this->num_edition = a.num_edition;
}

void Article::afficherDocument()
{
    cout << "Editeur : "<< editeur << " dans " << titre_revue << " : " << num_edition<<endl;
    Document::afficherDocument();

}


Article* Article::clone()
{
    //Document d;// = Document(titre,auteur,resume);
    Article a(*this);
//    Article *a = ;
    return new Article(*this);
}

void Article::coutDoc()
{
    cout << "gros fuck";
}

Article& Article::operator=(Article const& a)
{
    Article copy(a);

    titre_revue=a.titre_revue;
    editeur=a.editeur;
    num_edition=a.num_edition;
    titre=a.titre;
    auteur=a.auteur;
    resume=a.resume;

    return *this;
}
