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
        string nom;
        double poids;

    public:
        // Constructeur
        Boxer(string nom, double poids);

        // Destructeur
        ~Boxer();

        // Méthodes d'accès aux attributs
        string GetNom() const;
        void SetPoids(double poids);
        double GetPoids() const;
    
};

#endif // BOXER_HPP

