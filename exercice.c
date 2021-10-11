//
// Created by lisaf on 06/10/2021.
//
#include <stdio.h>
#include "exercice.h"
#include "structure.h"
#define NB_ELEM_MAX 100
#define NB_LIGNES_MAX 3
#define NB_COLONNES_MAX 4

 void exercice1(){
    NombreRationnel nR1, nR2, nR3, nR4;
    nR1 = saisieRationnel();
    nR2 = saisieRationnel();
    printf("le premier nombre rationnel est : \n");
    afficherRationnel(nR1);
    printf("le deuxième nombre rationnel est : \n");
    afficherRationnel(nR2);
    nR3 = multiplieRationnels(nR1,nR2);
    printf("la multiplication des deux rationnels est : \n");
    afficherRationnel(nR3);
    nR4 = additionRationnels(nR1,nR2);
    printf("l'addition des deux rationnels est : \n");
    afficherRationnel(nR4);

}

void exercice2(){
    int entiers[NB_ELEM_MAX], N=0, i=0, plusGrandEntier=0;
    printf("Combien de valeurs voulez vous ajouter ?\n");
    scanf("%d", &N);
    if (N>NB_ELEM_MAX){
        printf("Saisissez un nombre inferieur à 100 : \n ");
        scanf("%d", &N);
    }
    for (i=0; i<N; i++){
        printf("Saisissez la valeur de la case %d\n", i+1);
        scanf("%d", &entiers[i]);
    }
    plusGrandEntier=entiers[0];
    for (int j = 0; j < N-1; ++j) {
        if(entiers[j+1] > plusGrandEntier){
            plusGrandEntier = entiers[j+1];
        }
        }

    printf("le plus grand entier du tableau est : %d \n", plusGrandEntier);

}

void exercice3(){
    int tableau2D[NB_LIGNES_MAX][NB_COLONNES_MAX], i=0,j=0,k=0, tableau1D[NB_COLONNES_MAX*NB_LIGNES_MAX];
    for(i=0; i<NB_LIGNES_MAX; i++){
        for(j=0; j<NB_COLONNES_MAX; j++){
            printf("Saisissez la valeur de la case n°%d, de la ligne n°%d \n ", j+1, i+1);
            scanf("%d", &tableau2D[i][j]);
        }
    }
        for(i=0; i<NB_LIGNES_MAX; i++){
            for(j=0; j<NB_COLONNES_MAX; j++){
                tableau1D[k]=tableau2D[i][j];
                k = k + 1;
            }
        }

    printf("le tableau 2D est :\n" );
    afficherTableau2D(tableau2D);
    printf("le tableau 1D est :\n");
    afficherTableau1D(tableau1D,NB_LIGNES_MAX*NB_COLONNES_MAX);


}