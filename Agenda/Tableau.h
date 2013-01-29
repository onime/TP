#include <string>
#include "Entree.h"

using namespace std;

class Tableau
{
  int taille_tableau;
  int nb_element;
  Entree *entrees;
  
 public:
  int get_taille();
  int get_nb_elem();
  
  Tableau();
  Tableau(int p_taille_tableau);
  Tableau(const Tableau & t);
  ~Tableau();

  void afficherTableau();
  void ajouterNom(string nom);
  void ajouterNom(string nom,string num);
  void supprimerNom(string nom, string num);
  void supprimerNom(string nom);
  
};
