#include "Agenda.h"
#include <sstream>

using namespace std;

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
   a2.ajouterNom("20"); 
   monSuperAgendaDeSaRace.ajouterNom("15","hgdhdhfdhdf");
    
  Agenda a3 = monSuperAgendaDeSaRace + a2;
  Agenda copy(a3);

  /* if (a3 == copy)
      cout << "EGAL";
  else
      cout << "PAS EGAL";
  
  a3 -= "20";

   cout << a3;
  */

/*  if("20"/a3)
      a3["20"].afficheEntree();
  else
      cout << "QUE DALLLE";
*/
  a3('2');


  
  
}
