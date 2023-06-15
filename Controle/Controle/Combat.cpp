//
//  Combat.cpp
//  Controle
//
//  Created by Adam Hocini on 15/06/2023.
//


#include <stdio.h>
#include <string>
#include "Combat.hpp"
using namespace std;


Combat::Combat(string niveau) {
    this->niveau = niveau;
    coinBleu = nullptr;
    coinRouge = nullptr;
    vainqueur = nullptr;
}

Combat::~Combat() {
}


Boxer* Combat::getCoinBleu() const {
    return coinBleu;
}

Boxer* Combat::getCoinRouge() const {
    return coinRouge;
}

void Combat::setCoinBleu(Boxer* boxeur) {
    coinBleu = boxeur;
}

void Combat::setCoinRouge(Boxer* boxeur) {
    coinRouge = boxeur;
}

Boxer* Combat::getVainqueur() const {
    return vainqueur;
}

void Combat::designerVainqueur(Boxer* boxeur) {
    vainqueur = boxeur;
}
