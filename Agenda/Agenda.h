#include <string>
#include "Tableau.h"

using namespace std;

class Agenda
{
  Tableau tab;

 public:
  Agenda(int taille);
  Agenda(const Agenda & a);
  
  Agenda concat(Agenda a1);

  Tableau get_tab();
  void ajouterNom(string nom, string num);
  void ajouterNom(string nom);
  void supprimer(string nom,string num);
  void supprimer(string nom);
  void afficher();
  
  // std::ostream& operator<< (std::ostream& stream, Agenda &a);
//  Agenda operator+(Agenda const &a1,Agenda const &a2);
};

