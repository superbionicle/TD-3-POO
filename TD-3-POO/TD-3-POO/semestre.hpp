//
//  semestre.hpp
//  TD-3-POO
//
//  Created by Arthur on 04/05/2022.
//

#ifndef semestre_hpp
#define semestre_hpp

#include "matiere.hpp"
#include <iostream>
#include <vector>
using namespace std;

class semestre{
    string nom;
    vector<matiere> ensemble_matieres;
    float moyenne=0;
public:
    semestre(string saisie_nom,vector<matiere> saisie_ensemble_matiere={});
    ~semestre();
    void add_matiere(matiere saisie_matiere);
    void retrait_matiere(matiere retrait_matiere);
    float get_moyenne();
    void display_moyenne(){cout<<"Moyenne de "<<nom<<" : "<<moyenne<<endl;}
};

#endif /* semestre_hpp */
