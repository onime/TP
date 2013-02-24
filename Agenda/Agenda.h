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

  void ajouterNom(string nom, string num);
  void ajouterNom(string nom);
  void supprimer(string nom,string num);
  void supprimer(string nom);
  void afficher();
  bool est_egal(const Agenda & a1)const ;
     
  Agenda & operator-=(const string &nom);  
  Entree operator[](const string & nom) ; 
  Agenda operator=(Agenda const & a);
  friend ostream& operator<< (ostream& stream,Agenda const &a);
  Agenda& operator += (const Agenda & a1);
  Agenda operator+(const Agenda & a1);
  void operator()(const char & letter) const;

};


bool operator==(const Agenda & a1,const Agenda &a2);
bool operator/(const string & nom ,const Agenda & a1);
