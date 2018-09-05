//
//  main.cpp
//  Image
//
//  Created by Kevin on 18/08/2016.
//  Copyright © 2016 Kevin. All rights reserved.
//
#include <unistd.h>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

#include "Fonctions.hpp"
#include "Mot3L.hpp"
#include "Mot4L.hpp"
#include "Mot5L.hpp"
#include "Mot6L.hpp"
#include "Mot7L.hpp"
#include "Mot8L.hpp"

using namespace std;

/*

// Fonction qui permet d'effacer la console
void Effacher()
{
    system("clear");
}

// Fonction qui affiche l'entête du programme
void Entete()
{
    cout << "###### 4Images 1Mot  By KS  ######\n"<<endl;
    
}

// Fonction qui affiche le Menu Principal de l'application
void MenuPrincipal()
{
    cout << "***** Menu *****\n" << endl;
    cout << "Veuillez choisir une action \n" <<endl;
    cout << "1. Mot de 3 Lettres" <<endl;
    cout << "2. Mot de 4 Lettres" <<endl;
    cout << "3. Mot de 5 Lettres" <<endl;
    cout << "4. Mot de 6 Lettres" <<endl;
    cout << "5. Mot de 7 Lettres" <<endl;
    cout << "6. Mot de 8 Lettres" <<endl<<endl;
    cout << "7. Quitter le programme\n" <<endl;
    
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
*/
 
int main(int argc, const char * argv[])
{
    
    // Déclaration des variables
    int valueLettre = 0;
    bool fermeture =false;
    char choix = 0;
    string lettreEntrees;
    
    Lettre lettre1, lettre2, lettre3, lettre4, lettre5, lettre6;
    Lettre lettre7, lettre8, lettre9, lettre10, lettre11, lettre12;
    
    Mot3L monMot3L;
    Mot4L monMot4L;
    Mot5L monMot5L;
    Mot6L monMot6L;
    Mot7L monMot7L;
    Mot8L monMot8L;

    
    Effacher(); // Purge de la console
    
    while (fermeture==false)
    {
        Entete();
        MenuPrincipal();
        
        fflush(stdin); //purge les entrees de flux
        scanf("%s",&choix);// fix le choix du menu
        
        switch (choix)
        {
            case '1':
                valueLettre = 3;
                Effacher();
                Entete();
                lettreEntrees=MenuLettre(valueLettre);
                Effacher();
                Entete();
                Recherche(valueLettre, lettreEntrees);
                lettre1=CopyLettre(lettre1, lettreEntrees, 0);
                lettre2=CopyLettre(lettre2, lettreEntrees, 1);
                lettre3=CopyLettre(lettre3, lettreEntrees, 2);
                lettre4=CopyLettre(lettre4, lettreEntrees, 3);
                lettre5=CopyLettre(lettre5, lettreEntrees, 4);
                lettre6=CopyLettre(lettre6, lettreEntrees, 5);
                lettre7=CopyLettre(lettre7, lettreEntrees, 6);
                lettre8=CopyLettre(lettre8, lettreEntrees, 7);
                lettre9=CopyLettre(lettre9, lettreEntrees, 8);
                lettre10=CopyLettre(lettre10, lettreEntrees, 9);
                lettre11=CopyLettre(lettre11, lettreEntrees, 10);
                lettre12=CopyLettre(lettre12, lettreEntrees, 11);
                
                cout <<"Recherche de avec les lettres suivantes : " << lettre1.Valeur <<" "<< lettre2.Valeur <<" "
                << lettre3.Valeur<<" "<< lettre4.Valeur<<" "<< lettre5.Valeur<<" "
                << lettre6.Valeur<<" "<< lettre7.Valeur<<" "
                << lettre8.Valeur<<" "<< lettre9.Valeur<<" "
                << lettre10.Valeur<<" "<< lettre11.Valeur<<" " << lettre12.Valeur << endl;
                monMot3L.lettre1.Valeur= lettre1.Valeur;
                
                
                sleep(15);
                Effacher();
                
                break;
            
            case '2':
                valueLettre = 4;
                Effacher();
                Entete();
                lettreEntrees=MenuLettre(valueLettre);
                Effacher();
                Entete();
                Recherche(valueLettre, lettreEntrees);
                sleep(5);
                Effacher();
                break;
            
            case '3':
                valueLettre = 5;
                Effacher();
                Entete();
                lettreEntrees=MenuLettre(valueLettre);
                Effacher();
                Entete();
                Recherche(valueLettre, lettreEntrees);
                sleep(5);
                Effacher();
                break;
            
            case '4':
                valueLettre = 6;
                Effacher();
                Entete();
                lettreEntrees=MenuLettre(valueLettre);
                Effacher();
                Entete();
                Recherche(valueLettre, lettreEntrees);
                sleep(5);
                Effacher();
                break;
            
            case '5':
                valueLettre = 7;
                Effacher();
                Entete();
                lettreEntrees=MenuLettre(valueLettre);
                Effacher();
                Entete();
                Recherche(valueLettre, lettreEntrees);
                sleep(5);
                Effacher();
                break;
                
            case '6':
                valueLettre = 8;
                Effacher();
                Entete();
                lettreEntrees=MenuLettre(valueLettre);
                Effacher();
                Entete();
                Recherche(valueLettre, lettreEntrees);
                sleep(5);
                Effacher();
                break;
            
            case '7':
                Effacher();
                Entete();
                cout << "Fermeture\n"<<endl;
                fermeture=true;
                break;
            
            default:
                cout << "Erreur Veuillez patienter \n"<<endl;
                sleep(3);
                fflush(stdin); //purge les entrees de flux
                Effacher();
                break;
        }
    
    }
    
    return 0;
}
