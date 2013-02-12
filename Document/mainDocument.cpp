#include "Document.h"
#include "Livre.hpp"
#include "Article.hpp"

int main(void)
{
  string titre = "La nuit des temps"; 
  string auteur = "Barjavel";
  string resume = "Expedition en antarctique découvre deux personnes enfermé depuis la nuit des temps";
  string editeur = "Folio";
  
  Document d1 = Document(titre,auteur,&resume);
  Livre l1 = Livre(titre,auteur,&resume,editeur,1993);
  Article a1 = Article(titre,auteur,&resume,"les chiennes sauvages","les inrocks",4564564);
  
  Article a3=a1;
  a3.afficherDocument();

  
  
}
