//
//  Boxer.cpp
//  Controle
//
//  Created by Adam Hocini on 15/06/2023.
//

#include "Boxer.hpp"
#include <stdio.h>
#include <string>
using namespace std;


class Boxeur {
private:
    string nom;
    double poids;

public:
    // Constructeur
    Boxeur(std::string nom, double poids);

    // Destructeur
    ~Boxeur();

    // Méthodes d'accès aux attributs
    string getNom() const;
    void setPoids(double poids);
    double getPoids() const;
};
