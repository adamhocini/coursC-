//
//  Boxer.hpp
//  Controle
//
//  Created by Adam Hocini on 15/06/2023.
//

#ifndef Boxer_hpp
#define Boxer_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Boxer { // Déclaration anticipée de la classe Boxer
private:
    string niveau;
    Boxer* coinBleu; // Pointeur vers le Boxer du coin bleu
    Boxer* coinRouge; // Pointeur vers le Boxer du coin rouge
    Boxer* vainqueur; // Pointeur vers le Boxer vainqueur

public:
    // Constructeur
    Boxer(string niveau);

    // Destructeur
    ~Boxer();

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

 
#endif /* Boxer_hpp */
 
