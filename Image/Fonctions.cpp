//
//  Fonctions.cpp
//  Image
//
//  Created by Kevin on 29/06/2017.
//  Copyright © 2017 Kevin. All rights reserved.
//

#include "Fonctions.hpp"

using namespace std;

// Fonction qui permet d'effacer la console
void Effacher()
{
    system("clear");
}

// Fonction qui affiche l'entête du programme
void Entete()
{
    cout << "   ###### 4Images 1Mot  By KS  ######\n"<<endl;
    
}

// Fonction qui affiche le Menu Principal de l'application
void MenuPrincipal()
{
    cout << "           ***** Menu *****\n" << endl;
    cout << "       Veuillez choisir une action \n" <<endl;
    cout << "           1. Mot de 3 Lettres" <<endl;
    cout << "           2. Mot de 4 Lettres" <<endl;
    cout << "           3. Mot de 5 Lettres" <<endl;
    cout << "           4. Mot de 6 Lettres" <<endl;
    cout << "           5. Mot de 7 Lettres" <<endl;
    cout << "           6. Mot de 8 Lettres" <<endl<<endl;
    cout << "       7. Quitter le programme\n" <<endl;
    
}

// Fonction qui permet de savoir la longueur du mot choisi ainsi que les lettres choisies
string MenuLettre(int valueLettre)
{
    string lettreEntrees;
    cout << "Vous avez choisi un mot de " << valueLettre <<" lettres" << endl;
    cout << "Veuillez entrer les 12 lettres proposées\n" <<endl;
    cin >> lettreEntrees;
    
    return lettreEntrees;
}

// Fonction qui permet la recherche des lettres
void Recherche(int valueLettre, string lettreEntrees)
{
    cout << "Vous avez choisi un mot de " << valueLettre <<" lettres" << endl;
    
    
}

// Fonction qui permet de de copier les lettres
Lettre CopyLettre(Lettre lettreN, string lettreEntrees, int pos)
{
    char newlettre[20];
    size_t length =lettreEntrees.copy(newlettre, 1, pos);
    newlettre[length]='\0';
    lettreN.Valeur= newlettre;
    
    return lettreN;
}
