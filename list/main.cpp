#include "Iterateur.h"

int main()
{
    using namespace std;

    Cell *liste = new Cell(1);
    Iterateur i = Iterateur(liste);

    cout << i.courant();
    
    return 0;
}
