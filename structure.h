//
// Created by lisaf on 06/10/2021.
//

#ifndef TP5_STRUCTURE_H
#define TP5_STRUCTURE_H
#include "exercice.h"

typedef struct {
    int numerateur, denominateur;
}NombreRationnel;

NombreRationnel saisieRationnel();

void afficherRationnel(NombreRationnel nR);

NombreRationnel multiplieRationnels(NombreRationnel nR1, NombreRationnel nR2);

NombreRationnel additionRationnels(NombreRationnel nR1, NombreRationnel nR2);

void afficherTableau2D(int tableau[3][4] );

void afficherTableau1D(int tableau[], int taille);


#endif //TP5_STRUCTURE_H
