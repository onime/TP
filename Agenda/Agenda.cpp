#include <iostream>
#include <string>
#include "Agenda.h"

using namespace std;

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
    tab+=Entree(nom,num);
}

void Agenda::ajouterNom(string nom)
{
  tab+=Entree(nom,"00.00.00.00.00");
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

bool Agenda::est_egal(const Agenda& a1) const
{
    Tableau t1(a1.tab),t2(tab);

    if(t1.get_taille() != t2.get_taille())
	return false;
    if(t1.get_nb_elem() != t2.get_nb_elem())
	return false;

    for(int i = 0;i<=t1.get_nb_elem();i++)
	if(t1.get_nom(i) != t2.get_nom(i) || t1.get_num(i) != t2.get_num(i))
	    return false;

    return true;

}

Agenda Agenda::concat(Agenda a1)
{
    Agenda c = Agenda(a1.tab.get_taille() + tab.get_taille());

    for(int i=0;i<=tab.get_nb_elem();i++)
    {
	c.ajouterNom(tab.get_nom(i),tab.get_num(i));
    }
	
    for(int i=0;i<a1.tab.get_nb_elem();i++)
    {
	c.ajouterNom(a1.tab.get_nom(i),a1.tab.get_num(i));
    }
    
    return c;
}

void Agenda::operator()(const char & letter)const 
{
    Tableau copy(tab);
    int nb = copy.get_nb_elem();

    for (int i = 0;i<=nb;i++)
	if(copy.get_nom(i)[0] == letter)
	    cout << copy.get_nom(i)<< endl;
}

bool operator/(const string & nom,const Agenda & a1)
  {
      Agenda copy(a1);
      Entree e = copy[nom];

      if(e.getNom() == "" && e.getNum() == "")
	  return false;
      else
	  return true;
  }

bool operator==(const Agenda & a1,const Agenda &a2)
{
    return a1.est_egal(a2);
}

Agenda & Agenda::operator-=(const string &nom)
{
    tab.supprimerNom(nom);
    return *this;
}

Entree Agenda::operator[](const string & nom) 
{
    Entree e;
    for(int i=0;i<=tab.get_nb_elem();i++)
	if(tab.get_nom(i) == nom)
	    return Entree(nom,tab.get_num(i));
    return e;
}

Agenda Agenda::operator+(const Agenda & a1)
{
    Agenda copie(a1);

    return copie.concat(*this);
}

Agenda& Agenda::operator += (const Agenda & a1)
  {
      Agenda copie(a1);
      Agenda res=Agenda(5);
      res = (*this).concat(copie);
      //tab.afficherTableau();
      res.afficher();

       return *this;
  }

ostream& operator<< (ostream& stream,Agenda const &a)
{
    Agenda copy(a);
    Tableau t = copy.tab;
    for(int i=0;i<t.get_nb_elem();i++)
	stream << "Entree : " << t.get_nom(i) << " : " <<t.get_num(i) <<endl;	
    return stream;
}


Agenda Agenda::operator=(Agenda const &a)
{
    Agenda tmp = Agenda(a);
    tab = tmp.tab;
    return *this;
}
