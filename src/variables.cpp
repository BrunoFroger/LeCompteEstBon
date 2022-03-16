//-----------------------------------
//
//      variables.cpp
//
//-----------------------------------

#include <stdio.h>
#include <string.h>

#include "../inc/variables.hpp"

int plaques[]={ 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7 , 7, 8, 8, 9, 9, 10, 10, 25, 50 ,75 , 100 };
int tirage = 0;
char operations[] = { '+', '-', '*', '/' };
int listePlaques[NB_PLAQUES_TIRAGE];
char listeOperation[NB_PLAQUES_TIRAGE - 1];
char equation[50];
char listeEquations[NB_EQUATIONS][50];
char bidon[50];
char meillieureEquation[50];
int resultat = 0;
int meillieurResultat = 0;
bool testMode = false;
bool verboseMode = false;
int nbEssais=0;
int nbEquations;
int numeroEquationResultat;

//-----------------------------------
//
//      initVariables
//
//-----------------------------------
void initVariables(void){
    for (int i = 0 ; i < NB_PLAQUES_TIRAGE ; i++){
        listePlaques[i] =0;
    }
}

//-----------------------------------
//
//      formatNombre
//
//-----------------------------------
char nbFormate[50];
char *formatNombre(int nb){
    char tmp [50];
    bool positif = true;
    int i = 0;
    int j = 0;
    sprintf(tmp, "%d", nb);
    if (nb != 0) {
        //printf("--------------------------------\n");
        //printf("chaine initiale %s\n", tmp);

        // retournement de la chaine
        j = 0;
        for (i = 0 ; i < strlen(tmp) ; i ++){
            nbFormate[j++] = tmp[strlen(tmp) - i - 1];
            nbFormate[j] = '\0';
        }
        //printf("chaine apres retournement %s\n", nbFormate);

        // insertion des separateurs
        int mod = 0;
        j = 0;
        for (i = 0 ; i < strlen(nbFormate) ; i++){
            tmp[j++] = nbFormate[i];
            if (++mod == 3){
                if (i < strlen(nbFormate) - 1){
                    tmp[j++] = ' ';
                }
                mod = 0;
            }
            tmp[j] = '\0';
        }
        //printf("chaine avec separateurs %s\n", tmp);

        // retournement de la chaine
        j = 0;
        for (i = 0 ; i < strlen(tmp) ; i ++){
            nbFormate[j++] = tmp[strlen(tmp) - i - 1];
            nbFormate[j] = '\0';
        }
        //printf("chaine apres retournement %s\n", nbFormate);
    }
    return nbFormate;
}