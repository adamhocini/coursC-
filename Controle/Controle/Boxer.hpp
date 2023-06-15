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
#include "Combat.hpp"
using namespace std;

namespace Boxer {
    class Boxer
    {
        private:
        string nom;
        double poids;

        public:
        // Constructeur
        Boxer(string nom, double poids);
        
        // Destructeur
        ~Boxer();

        // Méthodes d'accès aux attributs
        string getNom() const;
        void setPoids(double poids);
        double getPoids() const;
};
}

 
#endif /* Boxer_hpp */
 
