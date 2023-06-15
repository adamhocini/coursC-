//
//  Boxer.cpp
//  Controle
//
//  Created by Adam Hocini on 15/06/2023.
//

#include <stdio.h>
#include <string>
#include "Boxer.hpp"
using namespace std;


// Constructeur
Boxer::Boxer(string nom, double poids) {
    this->nom = nom;
    this->poids = poids;
}

// Destructeur
Boxer::~Boxer() {
    // Rien à faire ici, pas de ressources à libérer
}

// Méthodes d'accès aux attributs
string Boxer::getNom() const {
    return nom;
}

void Boxer::setPoids(double poids) {
    this->poids = poids;
}

double Boxer::getPoids() const {
    return poids;
}



