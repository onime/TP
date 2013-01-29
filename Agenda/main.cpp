#include "Agenda.h"
#include <sstream>

int main()
{
  
  Agenda monSuperAgendaDeSaRace = Agenda(200);
    
  for(int i = 0;i<20;i++)
    {
      std::ostringstream oss;
      oss << i;
      string nom = oss.str();
      monSuperAgendaDeSaRace.ajouterNom(nom);
      
    }
  monSuperAgendaDeSaRace.ajouterNom("15","hgdhdhfdhdf");

  monSuperAgendaDeSaRace.supprimer("15");
    
  monSuperAgendaDeSaRace.afficher();
}
