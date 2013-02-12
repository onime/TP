#include <iostream>
#include <string>
#include "Tableau.h"

Tableau::Tableau()
{

}

Tableau::Tableau(int p_taille_tableau)
{
    nb_element = -1;
    taille_tableau = p_taille_tableau;
    entrees = new Entree[taille_tableau];
}
  
Tableau::Tableau(const Tableau &t)
{
    taille_tableau = t.taille_tableau;
    nb_element = t.nb_element;
    entrees = new Entree[taille_tableau];
    for(int i=0;i<=nb_element;i++)
	entrees[i] = t.entrees[i];
}

Tableau::~Tableau()
{
//    delete entrees;
}

void Tableau::afficherTableau()
{
    for(int i=0;i<= nb_element;i++)
	entrees[i].afficheEntree();
}

void Tableau::ajouterNom(string nom)
{
    Entree e = Entree(nom,"00.00.00.00.00");
    if(nb_element <= taille_tableau)
    {
	entrees[nb_element+1] = e;
	nb_element++;
    }
}

void Tableau::ajouterNom(string nom,string num)
{
    if(nb_element <= taille_tableau)
    {
	entrees[nb_element+1] = Entree(nom,num);
	nb_element++;
    }
}

void Tableau::supprimerNom(string nom,string num)
{
    int prev = 0;
    int trouve = 0;
 
    for(int i=0;i<=nb_element;i++)
    {
	entrees[prev] = entrees[i];
	if(!((entrees[i].getNom() == nom) && (entrees[i].getNum() == num)))
	    prev++;      
	else
	    trouve++;

    }
    if(trouve> 0)
	nb_element-=trouve;
}

void Tableau::supprimerNom(string nom)
{
    int prev = 0;
    int trouve = 0;
 
    for(int i=0;i<=nb_element;i++)
    {
	entrees[prev] = entrees[i];
	if(!(entrees[i].getNom() == nom))
	    prev++;
	else
	    trouve++;
    }
  
    if(trouve> 0)
	nb_element-=trouve;

}

int Tableau::get_taille()
{
    return taille_tableau;
}

int Tableau::get_nb_elem()
{
    return nb_element;
}

string Tableau::get_nom(int i)
{
    return entrees[i].getNom();
}

string Tableau::get_num(int i)
{
    return entrees[i].getNum();
}
