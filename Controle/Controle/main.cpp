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
        Boxer* boxer1 = new Boxer("Boxer 1", 70.5);
        Boxer* boxer2 = new Boxer("Boxer 2", 75.2);

        // Création du combat
        Combat combat("Niveau 1");

        // Définition des boxeurs pour le combat
        combat.setCoinBleu(boxer1);
        combat.setCoinRouge(boxer2);

        // Accès aux boxeurs dans le combat
        Boxer* coinBleu = combat.getCoinBleu();
        Boxer* coinRouge = combat.getCoinRouge();

        // Affichage des noms des boxeurs
        cout << "Boxeur du coin bleu : " << coinBleu->GetNom() << endl;
        cout << "Boxeur du coin rouge : " << coinRouge->GetNom() << endl;

        // Libération de la mémoire
        delete boxer1;
        delete boxer2;

    return 0;
}
