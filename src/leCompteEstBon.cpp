//-----------------------------------
//
//      leCompteEstBon.cpp
//
//-----------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cctype>
#include <ctime>

#include "../inc/variables.hpp"
#include "../inc/analyseParametres.hpp"
#include "../inc/tirage.hpp"
#include "../inc/calcul.hpp"
#include "../inc/tests.hpp"

clock_t timeDebut, timeFin;
float dureeExec;

int main(int argc, char **argv){

    printf("+-----------------------------------------+\n");
    printf("|                                         |\n");
    printf("|          Le Compte Est Bon              |\n");
    printf("|                                         |\n");
    printf("|          (c) B.Froger 2022              |\n");
    printf("|                                         |\n");
    printf("+-----------------------------------------+\n");

    timeDebut = clock();

    initVariables();

    analyseParametres(argc, argv);

    if (tirage == 0){
        tirage = getTirage();
    }

    if (listePlaques[0] == 0){
        tiragePlaques();
    }

    afficheTirage();

    if (testMode){
        // execute les tests avec les données soit generées soit passees en ligne de commande
        printf("mode test .....\n");
        tests();
    } else {
        calcul();
        timeFin = clock();
        dureeExec = (float)(timeFin - timeDebut) /CLOCKS_PER_SEC;
        if (verboseMode){
            printf("nombre d'equations : %d\n", nbEquations);
            printf("nombre d'essais : %s\n", formatNombre(nbEssais));
            printf("numero de l'equation resultat %d\n", numeroEquationResultat);
        }
    }

    printf("fin de traitement en %.2f secondes \n", dureeExec);
}
