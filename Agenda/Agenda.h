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
  
  Agenda operator=(Agenda const & a);
  friend ostream& operator<< (ostream& stream,Agenda const &a);
  Agenda operator += (Agenda  a1);
  Agenda operator+(Agenda a1);
  //Agenda operator+(Agenda const &a1,Agenda const &a2);
};

