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
}

// Méthodes d'accès aux attributs
string Boxer::GetNom() {
    return nom;
}

void Boxer::SetPoids(double poids) {
    this->poids = poids;
}

double Boxer::GetPoids() {
    return poids;
}



