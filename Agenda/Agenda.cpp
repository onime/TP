#include <iostream>
#include <string>
#include "Agenda.h"

Agenda::Agenda(int taille)
{
  tab = Tableau(taille);
}

Agenda::Agenda(const Agenda & a)
{
  tab = a.tab;
}

void Agenda::ajouterNom(string nom,string num)
{
  tab.ajouterNom(nom,num);
}

void Agenda::ajouterNom(string nom)
{
  tab.ajouterNom(nom);
}

void Agenda::supprimer(string nom,string num)
{
  tab.supprimerNom(nom,num);
}

void Agenda::supprimer(string nom)
{
  tab.supprimerNom(nom);
}

void Agenda::afficher()
{
  tab.afficherTableau();
}
