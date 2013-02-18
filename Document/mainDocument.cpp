#include "Document.h"
#include "Livre.hpp"
#include "Article.h"
#include "Biblio.h"

using namespace std;

int main(void)
{
  string titre = "La nuit des temps"; 
  string auteur = "Barjavel";
  string resume = "Expedition en antarctique découvre deux personnes enfermé depuis la nuit des temps";
  string editeur = "Folio";
  
  Document *d1 = new Livre(titre,auteur,&resume,editeur,1999);
  Livre l1 = Livre(titre,auteur,&resume,editeur,1993);
  Article a1 = Article(titre,auteur,&resume,"les chiennes sauvages","les inrocks",4564564);
  
  Article a3=a1;
  //a3.afficherDocument();
  
  Document *premierArticle = new Article(a1);
  Biblio b(premierArticle);
  
  b.ajouter(d1);
  b.ajouter(&l1);
  
  d1->coutDoc();
//  b.afficher();
  try
  {
      b.rechercher("fucke");
  }
  catch (char const *e)
  {
      cout << e;
      return -1;
  }
    
  b.afficher();

  delete premierArticle;
}
