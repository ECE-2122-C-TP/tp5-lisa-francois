//
// Created by lisaf on 06/10/2021.
//

#include <stdio.h>
#include "structure.h"
#define NB_LIGNES_MAX 3
#define NB_COLONNES_MAX 4



/* Fonction qui saisie des valeurs
     * Paramètres :
     * - INOUT : ...
     * - IN : rien
     * - OUT : un nombre rationnel
     */
NombreRationnel saisieRationnel() {
    NombreRationnel nR;
    printf("Saisissez le numerateur puis le denominateur de votre nombre rationnel\n");
    scanf("%d %d", &nR.numerateur, &nR.denominateur);
    return nR;
}
/* Fonction qui affiche le rationnel
     * Paramètres :
     * - IN : un rationnel
     * - OUT : void
     */
void afficherRationnel(NombreRationnel nR){
printf ("%d / %d \n",  nR.numerateur, nR.denominateur );
}

/* Fonction qui multiplie deux rationnels
     * Paramètres :
     * - IN : deux rationnels
     * - OUT : multiplication des deux rationnels
     */
NombreRationnel multiplieRationnels(NombreRationnel nR1, NombreRationnel nR2){
    NombreRationnel nR3;
    nR3.numerateur = nR1.numerateur * nR2.numerateur;
    nR3.denominateur = nR1.denominateur * nR2.denominateur;
    return nR3;
}

/* Fonction qui additionne deux rationnels
     * Paramètres :
     * - IN : deux rationnels
     * - OUT : addition des deux rationnels des deux rationnels
     */
NombreRationnel additionRationnels(NombreRationnel nR1, NombreRationnel nR2){
    NombreRationnel nR3;
    nR3.denominateur = nR1.denominateur * nR2.denominateur;
    nR3.numerateur = nR1.numerateur*nR2.denominateur + nR2.numerateur*nR1.denominateur;
    return nR3;
}



/* Fonction qui affiche un tableau 2D
     * Paramètres :
     * - IN : un tableau de dimension 3*4
     * - OUT : void
     */
void afficherTableau2D(int tableau[NB_LIGNES_MAX][NB_COLONNES_MAX] ){
    int i=0, j=0;
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("%d\t", tableau[i][j]);
        }
        printf("\n");
    }
}




/* Fonction qui affiche un tableau 1D
     * Paramètres :
     * - IN : un tableau à une dimension et sa taille
     * - OUT : void
     */
void afficherTableau1D(int tableau[], int taille){
    for(int a=0; a<taille; a++){
        printf(" %d ",tableau[a]);
    }
}