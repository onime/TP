#ifndef ENTRE_H
#define ENTRE_H

#include <iostream>
#include <string>

using namespace std;

class Entree{
  string nom;
  string num;

 public:
  Entree(string nom,string num);
  Entree();
  void afficheEntree();
  string getNom();
  string getNum();
};

#endif
