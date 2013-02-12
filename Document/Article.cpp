#include "Article.hpp"

void Article::afficherDocument()
{
    cout << "Editeur : "<< editeur << " dans " << titre_revue << " : " << num_edition<<endl;
    Document::afficherDocument();

}


Article Article::clone()
{
    return Article(titre,auteur,resume,titre_revue,editeur,num_edition);
}

Article& Article::operator=(Article const& a)
{
    
    return *this;
}
