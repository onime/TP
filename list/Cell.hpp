#include <iostream>

class Cell
{
    
    
public:
    int val;
    Cell *next;

Cell(int val_p): val(val_p)
    {
	next = NULL;
    }	

};
