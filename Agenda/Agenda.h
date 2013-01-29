#include <string>
#include "Tableau.h"

using namespace std;

class Agenda
{
  Tableau tab;

 public:
  Agenda(int taille);
  Agenda(const Agenda & a);
  
  Agenda concat(Agenda a1,Agenda a2);

  void ajouterNom(string nom, string num);
  void ajouterNom(string nom);
  void supprimer(string nom,string num);
  void supprimer(string nom);
  void afficher();

  std::ostream& operator<< (std::ostream& stream, Agenda &a);
};

