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
        string GetNom();
        void SetPoids(double poids);
        double GetPoids();
    
    
};

#endif // BOXER_HPP

