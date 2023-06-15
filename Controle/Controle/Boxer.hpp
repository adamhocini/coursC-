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

class Combat; // Déclaration anticipée de la classe Combat

class Boxer {
private:
    string niveau;
    Combat* coinBleu; // Pointeur vers le Combat du coin bleu
    Combat* coinRouge; // Pointeur vers le Combat du coin rouge
    Combat* vainqueur; // Pointeur vers le Combat vainqueur

public:
    // Constructeur
    Boxer(std::string niveau);

    // Destructeur
    ~Boxer();

    // Méthodes d'accès aux coins et aux Combats
    Combat* getCoinBleu() const;
    Combat* getCoinRouge() const;
    void setCoinBleu(Combat* combat);
    void setCoinRouge(Combat* combat);

    // Méthode pour obtenir le vainqueur
    Combat* getVainqueur() const;

    // Méthode pour désigner le vainqueur
    void designerVainqueur(Combat* combat);
};

#endif // BOXER_HPP

