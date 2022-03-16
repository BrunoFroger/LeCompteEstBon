//-----------------------------------
//
//      tirage.cpp
//
//-----------------------------------


#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

#include "../inc/variables.hpp"

int result;
int lastTirage=0;

//-----------------------------------
//
//      getTirage
//
//-----------------------------------
int getTirage(void){
    result = 0;
    srand(time(NULL));
    while ((result < 100) || (result >= 1000)){
        result = rand() % 1000;
        if (result == lastTirage){
            result = 0;
        }
    }
    return result;
}

//-----------------------------------
//
//      listePlaques
//
//-----------------------------------
void afficheTirage(void){

    printf("+-----------------------------------------+\n");
    printf("|              tirage = %3d               |\n", tirage);
    printf("+-----------------------------------------+\n");

    // liste des plaques tirées 
    //printf("Liste des plaques tirées : ");
    printf("|");
    for (int i = 0 ; i < NB_PLAQUES_TIRAGE ; i++){
        printf(" %3d  |", listePlaques[i]);
    }
    printf("\n");
    printf("+-----------------------------------------+\n");
}

//-----------------------------------
//
//      tiragePlaques
//
//-----------------------------------
void tiragePlaques(void){
    int newIndex;
    int tblIndex[NB_PLAQUES_TIRAGE];
    bool doublon;
    srand(time(NULL));
    for (int i = 0 ; i < NB_PLAQUES_TIRAGE ; i++) {
        tblIndex[i] = -1;
    }
    //newIndex = rand() % NB_PLAQUES_TIRAGE;
    //tblIndex[0] = newIndex;
    //printf("plaque numero %d = %d\n", 0, newIndex);
    for (int i = 0 ; i < NB_PLAQUES_TIRAGE ; i++){
        doublon = true;
        while (doublon){
            doublon = false;
            newIndex = rand() % NB_PLAQUES_JEU;
            for (int j = 0 ; j < i ; j++){
                //printf("test de newIndex= %d avec i=%d, j=%d => tblIndex[i]=%d, tblIndex[j]=%d\n", newIndex, i, j, tblIndex[i], tblIndex[j]);
                if (tblIndex[j] == newIndex){
                    //printf("c'est un doublon %d = %d\n", tblIndex[j], newIndex);
                    doublon = true;
                } else {
                    //printf("pas de doublon\n");
                }
            }
        }
        tblIndex[i] = newIndex;
        //printf("plaque numero %d = %d\n", i, newIndex);
    }
    
    //printf("tirage des plaques (index)\n");
    for (int i = 0 ; i < NB_PLAQUES_TIRAGE ; i++){
        //printf("palque n°%d, index = %d, plaque = %d\n", i, tblIndex[i], plaques[tblIndex[i]]);
        listePlaques[i] = plaques[tblIndex[i]];
    }
    //printf("\n");
    

}