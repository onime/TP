#include "Entree.h"
#include <iostream>
#include <string>

Entree::Entree(string p_nom,string p_num)
{
  nom = p_nom;
  num = p_num;
}

Entree::Entree()
{
}
void Entree::afficheEntree()
{
  std::cout << "Entree : " << nom << " num : " <<num <<std::endl;
} 

string Entree::getNom()
{
  return nom;
}

string Entree::getNum()
{
  return num;
}
