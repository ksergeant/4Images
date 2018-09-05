//
//  Fonctions.hpp
//  Image
//
//  Created by Kevin on 29/06/2017.
//  Copyright © 2017 Kevin. All rights reserved.
//

#ifndef Fonctions_hpp
#define Fonctions_hpp

#include <unistd.h>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

#include "Mot3L.hpp"
#include "Mot4L.hpp"
#include "Mot5L.hpp"
#include "Mot6L.hpp"
#include "Mot7L.hpp"
#include "Mot8L.hpp"

using namespace std;

void Effacher();
void Entete();
void MenuPrincipal();
string MenuLettre(int valueLettre);
void Recherche(int valueLettre, string lettreEntrees);
Lettre CopyLettre(Lettre lettreN, string lettreEntrees, int pos);


#endif /* Fonctions_hpp */

