//-----------------------------------
//
//      analyseParametres.cpp
//
//-----------------------------------

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../inc/variables.hpp"

//-----------------------------------
//
//      aide
//
//-----------------------------------
void aide(char *nomProgramme){
    printf("syntaxe : %s [options]\n", nomProgramme);
    printf("    options : \n");
    printf("        -h : cette aide\n");
    printf("        -t : valeur du tirage (nombre a rechercher)\n");
    printf("        -v : mode verbose (affichage d'information en fin de tirage)\n");
    printf("        -p xx yy zz .... : liste des plaques du tirage (%d)\n", NB_PLAQUES_TIRAGE);
    exit(0);
}

//-----------------------------------
//
//      analyseParametres
//
//-----------------------------------
void analyseParametres(int argc, char **argv){
    if (argc == 1) return;
    //printf("Analyse des parametres ... debut \n");
    int i = 1;
    char param[50];
    do {
        //printf("traitement du parametre numero %d\n", i);
        strcpy(param, argv[i]);
        //printf("analyse de %s\n", param);
        if (param[0] != '-'){
            printf("parametre incorrect %s\n", param);
        } else {
            //printf("gestion d'une option %s\n", param);
            switch(param[1]){
                case 'd' : // aide
                    testMode = true;
                    break;
                case 'h' : // aide
                    aide(argv[0]);
                    break;
                case 't' : // donne la valeur a rechercher
                    tirage = atoi(argv[++i]);
                    break;
                case 'v' : // donne la valeur a rechercher
                    verboseMode = true;
                    break;
                case 'p' : // donne la liste des palques du tirage
                    for (int j = 0 ; j < NB_PLAQUES_TIRAGE ; j++){
                        listePlaques[j] = atoi(argv[++i]);
                    }
                    break;
                default :
                    printf("option inconnue %s\n", param);
                    exit(-1);
            }
        }
    } while (++i < argc);
    //printf("Analyse des parametres ... fin \n");
}