#include "Document.h"

using namespace std;

Document::Document(string & p_titre,string p_auteur, string * p_resume):titre(p_titre)
{
  auteur = p_auteur;
  resume = p_resume;
}

Document::Document(const Document &d):titre(d.titre)
{
  auteur = d.auteur;
  resume = d.resume;
}

void Document::afficherDocument()
{
    cout << "Titre : "<< titre << " de " << auteur << endl;
    cout << "Résumé : "<< endl;
    cout << *resume <<endl;
  
}

Document Document::clone()
{
  return Document(titre,auteur,resume);
}
