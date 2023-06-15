//
//  main.cpp
//  Controle
//
//  Created by Adam Hocini on 15/06/2023.
//

#include <iostream>
#include "Boxer.hpp"
#include "Combat.hpp"
using namespace std;


int main() {
    // Création des boxeurs
    Boxer* boxeur1 = new Boxer("Boxeur 1", 70.5);
    Boxer* boxeur2 = new Boxer("Boxeur 2", 68.2);

    // Création du combat
    Combat* combat = new Combat("Niveau 1");

    // Attribution des boxeurs aux coins
    combat->setCoinBleu(boxeur1);
    combat->setCoinRouge(boxeur2);

    // Désignation du vainqueur
    combat->designerVainqueur(boxeur1);

    // Récupération des informations
    Boxer* vainqueur = combat->getVainqueur();
    cout << "Le vainqueur est : " << vainqueur->getNom() << endl;

    // Nettoyage de la mémoire
    delete combat;
    delete boxeur1;
    delete boxeur2;

    return 0;
}
