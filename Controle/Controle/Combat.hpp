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

namespace Combat {

class Combat {
private:
    string niveau;
    Boxer* coinBleu; // Pointeur vers le boxeur du coin bleu
    Boxer* coinRouge; // Pointeur vers le boxeur du coin rouge
    Boxer* vainqueur; // Pointeur vers le boxeur vainqueur
    
public:
    // Constructeur
    Combat(string niveau);
     
    // Destructeur
    ~Combat();
    
    // Méthodes d'accès aux coins et aux boxeurs
    Boxer* getCoinBleu() const;
    Boxer* getCoinRouge() const;
    void setCoinBleu(Boxer* boxer);
    void setCoinRouge(Boxer* boxer);
    
    // Méthode pour obtenir le vainqueur
    Boxer* getVainqueur() const;
    
    // Méthode pour désigner le vainqueur
    void designerVainqueur(Boxer* boxer);
};
}




#endif /* Combat_hpp */
