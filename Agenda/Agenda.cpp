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

Tableau Agenda::get_tab()
{
    return tab;
}

Agenda Agenda::concat(Agenda a1)
{
    Agenda c = Agenda(a1.get_tab().get_taille() + tab.get_taille());

    for(int i=0;i<=tab.get_nb_elem();i++)
	c.ajouterNom(tab.get_nom(i),tab.get_num(i));
	
    for(int i=0;i<a1.get_tab().get_nb_elem();i++)
	c.ajouterNom(a1.get_tab().get_nom(i),a1.get_tab().get_num(i));

    
    return c;
}
