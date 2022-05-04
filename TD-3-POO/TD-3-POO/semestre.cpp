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

semestre::semestre(string saisie_nom){
    nom=saisie_nom;
    //ensemble_matieres=saisie_ensemble_matiere;
}
semestre::~semestre(){
    ensemble_matieres.clear();
}
void semestre::add_matiere(matiere* saisie_matiere){
    ensemble_matieres.push_back(saisie_matiere);
}
void semestre::add_matiere(){
    float temp_coef,temp_note;
    string temp_nom;
    cout<<"Saisir le nom de la matiere : ";
    cin>>temp_nom;
    //cout<<endl;
    cout<<"Saisir le coef de la matiere : ";
    cin>>temp_coef;
    //cout<<endl;
    cout<<"Saisir la note de la matiere : ";
    cin>>temp_note;
    cout<<endl;
    
    matiere* temp_matiere=new matiere(temp_nom,temp_coef,temp_note);
    ensemble_matieres.push_back(temp_matiere);
}
/*void semestre::retrait_matiere(matiere* retrait_matiere){

}*/
float semestre::get_moyenne(){
    //display_notes();
    float temp_moyenne=0;
    float temp_coef=0;
    for(int i=0;i<ensemble_matieres.size();i++){
        temp_moyenne+=ensemble_matieres[i]->get_note()*ensemble_matieres[i]->get_coef();
        temp_coef+=ensemble_matieres[i]->get_coef();
    }
    moyenne=temp_moyenne/temp_coef;
    return(moyenne);
}

void semestre::display_notes(){
    for(int i=0;i<ensemble_matieres.size();i++){
        cout<<"Nom : "<<ensemble_matieres[i]->get_nom();
        cout<<"\t Note : "<<ensemble_matieres[i]->get_note();
        cout<<"\t Coef : "<<ensemble_matieres[i]->get_coef()<<endl;
    }
    cout<<endl;
}
