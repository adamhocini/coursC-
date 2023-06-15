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
    
    // Instanciation automatique de Boxer
        Boxer boxeur_1("Box_1", 75.0);
        cout << "Adresse de boxeur_1 : " << &boxeur_1 << std::endl;
        cout << "Nom de boxeur_1 : " << boxeur_1.GetNom() << std::endl;
        cout << "Poids de boxeur_1 : " << boxeur_1.GetPoids() << " kg" << std::endl;

        // Instanciation dynamique de Boxer
        Boxer* boxeur_2 = new Boxer("Box_2", 78.0);
        cout << "Adresse de boxeur_2 : " << boxeur_2 << std::endl;
        cout << "Nom de boxeur_2 : " << boxeur_2->GetNom() << std::endl;
        std::cout << "Poids de boxeur_2 : " << boxeur_2->GetPoids() << " kg" << std::endl;

        // Libération de la mémoire
        delete boxeur_2;

        delete boxer1;
        delete boxer2;

    return 0;
}
