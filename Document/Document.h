#ifndef DOC_H
#define DOC_H

#include <iostream>
#include <string>

using namespace std;

class Document
{
 
 protected:
  string & titre;
  string *resume;
  string auteur;
 
 public:
  Document(string & p_titre,string p_auteur,string * p_resume);
  Document(const Document & d);
  
  Document clone();
  void afficherDocument();

};

#endif
