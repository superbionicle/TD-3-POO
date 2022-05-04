//
//  matiere.hpp
//  TD-3-POO
//
//  Created by Arthur on 04/05/2022.
//

#ifndef matiere_hpp
#define matiere_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class matiere{
    string nom;
    float note,coef;
public:
    matiere(string saisie_nom,float saisie_coef,float saisie_note=0);
    float get_note(){return(note);};
    string get_nom(){return(nom);};
    float get_coef(){return(coef);};
    void set_note(float saisie_note){note=saisie_note;};
    void afficher_note(){cout<<"Note de "<<nom<<" : "<<note<<endl;};
};

#endif /* matiere_hpp */
