//-----------------------------------
//
//      resolution.cpp
//
//-----------------------------------

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

#include "../inc/variables.hpp"

//-----------------------------------
//
//      resolutionAvecParentheses
//
//-----------------------------------
int resolution(char *equation){
    int resultat, idx;
    char chaineDebut[50];
    char chaineFin[50];
    char chaineParenthese[50];
    char operateur;
    //printf("resolution de l'equation avec parentheses %s\n", equation);

    // traitement des blocs entre parentheses en premier
    // cherche premiere parentheses fermante
    if (strchr(equation, ')') != NULL){
        //printf("traitement de parentheses\n");
        strcpy(chaineFin, &(strchr(equation, ')')[1]));
        strcpy(chaineDebut,equation);
        idx = strlen(equation) - strlen(chaineFin);
        chaineDebut[idx] = '\0';
        // cherche parenthese ouvrante correspondante
        strcpy(chaineParenthese, &(strrchr(chaineDebut, '(')[1]));
        chaineParenthese[strlen(chaineParenthese) - 1] = '\0';
        chaineDebut[strlen(chaineDebut) - strlen(chaineParenthese) -2] ='\0';

        //printf("chaine debut <%s>, entreparentheses <%s>, chaine fin <%s>\n",
        //    chaineDebut, chaineParenthese, chaineFin);
        int result = resolution(chaineParenthese);
        //printf("resultat de l'evaluation entre parenthees = %d\n", resultat);
        sprintf(chaineParenthese, "%s%d%s", chaineDebut, result, chaineFin);
        resultat = resolution(chaineParenthese);
    } else {
        strcpy(chaineDebut, equation);
        if (strchr(equation, '+') != NULL){
            strcpy(chaineFin, &(strchr(equation, '+')[1]));
            strcpy(chaineDebut, equation);
            idx = strcspn(equation, "+");
            chaineDebut[idx] = '\0';
            //printf("decomposition de <%s> en <%s> + <%s>\n", equation, chaineDebut, chaineFin);
            resultat = resolution(chaineDebut) + resolution(chaineFin);
            //printf("equation %s, resultat %d \n", equation, resultat);
        } else if (strchr(equation, '-') != NULL){
            if (equation[0] == '-'){
                return -resultat;
            }
            strcpy(chaineFin, &(strchr(equation, '-')[1]));
            strcpy(chaineDebut, equation);
            idx = strcspn(equation, "-");
            chaineDebut[idx] = '\0';
            //printf("decomposition de <%s> en <%s> + <%s>\n", equation, chaineDebut, chaineFin);
            int tmp1 = resolution(chaineDebut);
            int tmp2 = resolution(chaineFin);
            resultat = tmp1 - tmp2;
            //printf("equation %s, resultat %d \n", equation, resultat);
        } else if (strchr(equation, '*') != NULL){
            strcpy(chaineFin, &(strchr(equation, '*')[1]));
            strcpy(chaineDebut, equation);
            idx = strcspn(equation, "*");
            chaineDebut[idx] = '\0';
            //printf("decomposition de <%s> en <%s> + <%s>\n", equation, chaineDebut, chaineFin);
            int tmp1 = resolution(chaineDebut);
            int tmp2 = resolution(chaineFin);
            resultat = tmp1 * tmp2;
            //printf("equation %s, resultat %d \n", equation, resultat);
        } else if (strchr(equation, '/') != NULL){
            strcpy(chaineFin, &(strchr(equation, '/')[1]));
            strcpy(chaineDebut, equation);
            idx = strcspn(equation, "/");
            chaineDebut[idx] = '\0';
            //printf("decomposition de <%s> en <%s> + <%s>\n", equation, chaineDebut, chaineFin);
            int tmp1 = resolution(chaineDebut);
            int tmp2 = resolution(chaineFin);
            if (tmp2 == 0){
                resultat = 99999;
            } else {
                resultat = tmp1 / tmp2;
                if ((resultat * tmp2) != tmp1){
                    resultat = 99999;
                }
            }
            //printf("equation %s, resultat %d \n", equation, resultat);
        } else {
            resultat = atoi(equation);
        }
    }
    //printf("resultat recherche = %d (meillieur resultat = %d) => le resultat de %s est %d\n", tirage, meillieurResultat, equation, resultat);
    //getchar();
    return resultat;
}