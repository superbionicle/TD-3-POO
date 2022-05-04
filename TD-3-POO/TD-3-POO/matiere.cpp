//
//  matiere.cpp
//  TD-3-POO
//
//  Created by Arthur on 04/05/2022.
//

#include "matiere.hpp"
#include "iostream"
using namespace std;

matiere::matiere(string saisie_nom,float saisie_coef,float saisie_note){
    note=saisie_note;
    nom=saisie_nom;
    coef=saisie_coef;
}

