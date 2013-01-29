#include "Cell.hpp"

class Iterateur
{
private:
    
    
    Cell *debut_liste;
    Cell *before;

public:

    Iterateur(Cell *liste);

    void allerDebut();
    void avancer();
    int courant();
    void allerFin();
    bool enFin();
    void ajouter(int val);
    void suprimer();

};
