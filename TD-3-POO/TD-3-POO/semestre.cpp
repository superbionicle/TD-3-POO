//
//  semestre.cpp
//  TD-3-POO
//
//  Created by Arthur on 04/05/2022.
//

#include "semestre.hpp"
#include "matiere.hpp"
#include <iostream>
#include <vector>

semestre::semestre(string saisie_nom,vector<matiere> saisie_ensemble_matiere){
    nom=saisie_nom;
    ensemble_matieres=saisie_ensemble_matiere;
}
semestre::~semestre(){
    ensemble_matieres.clear();
}
void semestre::add_matiere(matiere saisie_matiere){
    ensemble_matieres.push_back(saisie_matiere);
}
void semestre::retrait_matiere(matiere retrait_matiere){

}
float semestre::get_moyenne(){
    float temp_moyenne;
    for(int i=0;i<ensemble_matieres.size();i++){
        temp_moyenne+=ensemble_matieres[i].get_note();
    }
    moyenne=temp_moyenne/ensemble_matieres.size();
    return(moyenne);
}
