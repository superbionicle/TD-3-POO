//
//  main.cpp
//  TD-3-POO
//
//  Created by Arthur on 04/05/2022.
//

#include <iostream>
#include "matiere.hpp"
#include "semestre.hpp"
using namespace std;

int main() {
    // Partie 1 : matières
    matiere matiere_1("maths",10);
    matiere matiere_2("physique",8,12);
    
    matiere_1.set_note(15);
    //float note_math=matiere_1.get_note();
    //cout<<note_math<<endl;
    //matiere_1.afficher_note();
    
    //Partie 2 : semestre
    semestre semestre6("semestre 6");
    semestre6.add_matiere();
    semestre6.add_matiere();
    semestre6.display_notes();
    //cout<<"Moyenne semestre 6 : "<<semestre6.get_moyenne()<<endl;
    semestre6.get_moyenne();
    semestre6.display_moyenne();
    
    // Partie 3 : matières fixées
    semestre6.add_matiere(&matiere_1);
    semestre6.add_matiere(&matiere_2);
    semestre6.display_notes();
    semestre6.get_moyenne();
    semestre6.display_moyenne();
        
    //Partie 4 :
    return 0;
}
