//
//  Combat.hpp
//  Controle
//
//  Created by Adam Hocini on 15/06/2023.
//

#ifndef Combat_hpp
#define Combat_hpp

#include <stdio.h>
#include <string>
#include "Boxer.hpp"
using namespace std;

class Combat {
private:

    string niveau;
    Boxer* coinBleu; // Pointeur vers le Boxer du coin bleu
    Boxer* coinRouge; // Pointeur vers le Boxer du coin rouge
    Boxer* vainqueur; // Pointeur vers le Boxer vainqueur

public:
    // Constructeur
    Combat(string niveau);

    Combat(const string& niveau) : niveau(niveau), coinBleu(nullptr), coinRouge(nullptr), vainqueur(nullptr) {
            cout << "Constructeur de Combat : Niveau " << niveau << std::endl;
        }

        // Destructeur
        ~Combat() {
            cout << "Destructeur de Combat : Niveau " << niveau << std::endl;
        }

    // Méthodes d'accès aux coins et aux Boxers
    Boxer* getCoinBleu() const;
    Boxer* getCoinRouge() const;
    void setCoinBleu(Boxer* Boxer);
    void setCoinRouge(Boxer* Boxer);

    // Méthode pour obtenir le vainqueur
    Boxer* getVainqueur() const;

    // Méthode pour désigner le vainqueur
    void designerVainqueur(Boxer* Boxer);
    
    
};

#endif /* Combat_hpp */

