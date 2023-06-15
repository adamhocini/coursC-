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
    // Assurez-vous de libérer la mémoire des boxeurs
    delete coinBleu;
    delete coinRouge;
    delete vainqueur;
}

Boxeur* Combat::getCoinBleu() const {
    return coinBleu;
}

Boxeur* Combat::getCoinRouge() const {
    return coinRouge;
}

void Combat::setCoinBleu(Boxeur* boxeur) {
    coinBleu = boxeur;
}

void Combat::setCoinRouge(Boxeur* boxeur) {
    coinRouge = boxeur;
}

Boxeur* Combat::getVainqueur() const {
    return vainqueur;
}

void Combat::designerVainqueur(Boxeur* boxeur) {
    vainqueur = boxeur;
}
