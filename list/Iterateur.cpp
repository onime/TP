#include "Iterateur.h"

Iterateur::Iterateur(Cell *liste)
{
    debut_liste = new Cell(999);
    before = liste;
    debut_liste->next = before;
    
}

void Iterateur::allerDebut()
{
    before = debut_liste->next;
}

void Iterateur::avancer()
{
    if(before->next != NULL)
	before = before->next;
    
}

int Iterateur::courant()
{
    return before->val;
}

void Iterateur::allerFin()
{
    while(before->next != NULL)
	before = before->next;
}

bool Iterateur::enFin()
{
    if(before->next == NULL)
	return true;
    else
	return false;
}

void Iterateur::ajouter(int val)
{
    Cell *n = new Cell(val);
    
    n->next = before->next;

    before->next = n;
}

void Iterateur::suprimer()
{
    Cell *temp = before->next;

    before->next = temp->next;
    delete temp;
}

