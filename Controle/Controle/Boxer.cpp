//
//  Boxer.cpp
//  Controle
//
//  Created by Adam Hocini on 15/06/2023.
//

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
    string getNom() const;
    void setPoids(double poids);
    double getPoids() const;
};


