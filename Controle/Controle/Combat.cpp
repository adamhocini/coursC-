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


Combat::~Combat() {}

