#include "Agenda.h"
#include <sstream>

int main()
{
  
    Agenda monSuperAgendaDeSaRace = Agenda(200);
    Agenda a2 = Agenda(300);
	
   for(int i = 0;i<20;i++)
    {
      std::ostringstream oss;
      oss << i;
      string nom = oss.str();
      monSuperAgendaDeSaRace.ajouterNom(nom);
      
    }
   for(int i = 0;i<30;i++)
    {
      std::ostringstream oss;
      oss << (i+20);
      string nom = oss.str();
      a2.ajouterNom(nom);
      
    }
   
  monSuperAgendaDeSaRace.ajouterNom("15","hgdhdhfdhdf");

  monSuperAgendaDeSaRace.supprimer("15");
  Agenda a3 = Agenda(44);
  
  a2 +=  monSuperAgendaDeSaRace;
  a3 = a2;
  std::cout << a3;
}
