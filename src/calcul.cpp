//-----------------------------------
//
//      calcul.cpp
//
//-----------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../inc/variables.hpp"
#include "../inc/resolution.hpp"


//-----------------------------------
//
//      getOperateur
//
//-----------------------------------
char op(int val){
    switch (val){
        case 0:
            return '+';
        case 1:
            return '-';
        case 2:
            return '*';
        case 3:
            return '/';
    }
    return '?';
}

//-----------------------------------
//
//      buildEquation
//
//-----------------------------------
void buildEquation(int nb1, int op1, int nb2, int op2, int nb3, int op3, int nb4, int op4, int nb5, int op5, int nb6){
    sprintf(equation, "%d%c%d%c%d%c%d%c%d%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5], op(op5), 
            listePlaques[nb6] );
}

//-----------------------------------
//
//      buildEquations
//
//-----------------------------------
void buildEquations(int nb1, int op1, int nb2, int op2, int nb3, int op3, int nb4, int op4, int nb5, int op5, int nb6){
    int i = 0;

    // equation 0 6 plaques
    sprintf(equation, "%d%c%d%c%d%c%d%c%d%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5], op(op5), 
            listePlaques[nb6] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 1 6 plaques
    sprintf(equation, "(%d%c%d)%c%d%c%d%c%d%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5], op(op5), 
            listePlaques[nb6] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 2 6 plaques
    sprintf(equation, "(%d%c%d)%c(%d%c%d)%c%d%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5], op(op5), 
            listePlaques[nb6] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 3 6 plaques
    sprintf(equation, "(%d%c%d)%c%d%c%d%c(%d%c%d)", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5], op(op5), 
            listePlaques[nb6] );
    //printf("equation %2d = %s\n", i, equation);
    //strcpy(listeEquations[i++], equation);

    // equation 4 6 plaques
    sprintf(equation, "(%d%c%d)%c%d%c%d%c(%d%c%d)", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5], op(op5), 
            listePlaques[nb6] );
    //printf("equation %2d = %s\n", i, equation);
    //strcpy(listeEquations[i++], equation);

    // equation 5 6 plaques
    sprintf(equation, "(%d%c%d)%c(%d%c%d)%c(%d%c%d)", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5], op(op5), 
            listePlaques[nb6] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 6 6 plaques
    sprintf(equation, "(%d%c%d)%c(%d%c%d%c%d)%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5], op(op5), 
            listePlaques[nb6] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 7 6 plaques
    sprintf(equation, "(%d%c%d%c%d)%c%d%c%d%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5], op(op5), 
            listePlaques[nb6] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 8 6 plaques
    sprintf(equation, "(%d%c%d%c%d)%c(%d%c%d)%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5], op(op5), 
            listePlaques[nb6] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 9 6 plaques
    sprintf(equation, "(%d%c%d%c%d)%c%d%c(%d%c%d)", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5], op(op5), 
            listePlaques[nb6] );
    //printf("equation %2d = %s\n", i, equation);
    //strcpy(listeEquations[i++], equation);

    // equation 10 6 plaques
    sprintf(equation, "(%d%c%d%c%d)%c(%d%c%d%c%d)", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5], op(op5), 
            listePlaques[nb6] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 11 6 plaques
    sprintf(equation, "(%d%c%d%c%d%c%d)%c%d%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5], op(op5), 
            listePlaques[nb6] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 12 6 plaques
    sprintf(equation, "(%d%c%d%c%d%c%d)%c(%d%c%d)", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5], op(op5), 
            listePlaques[nb6] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 13 6 plaques
    sprintf(equation, "%d%c(%d%c%d%c%d)%c(%d%c%d)", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5], op(op5), 
            listePlaques[nb6] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 14 5 plaques
    sprintf(equation, "%d%c%d%c%d%c%d%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 15 5 plaques
    sprintf(equation, "(%d%c%d)%c%d%c%d%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 16 5 plaques
    sprintf(equation, "(%d%c%d)%c(%d%c%d)%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 17 5 plaques
    sprintf(equation, "(%d%c%d)%c%d%c(%d%c%d)", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5] );
    //printf("equation %2d = %s\n", i, equation);
    //strcpy(listeEquations[i++], equation);

    // equation 18 5 plaques
    sprintf(equation, "(%d%c%d)%c(%d%c%d%c%d)", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 19 5 plaques
    sprintf(equation, "(%d%c%d%c%d)%c%d%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 20 5 plaques
    sprintf(equation, "(%d%c%d%c%d)%c(%d%c%d)", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 21 5 plaques
    sprintf(equation, "(%d%c%d%c%d%c%d)%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 22 5 plaques
    sprintf(equation, "%d%c(%d%c%d%c%d)%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 23 4 plaques
    sprintf(equation, "%d%c%d%c%d%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 24 4 plaques
    sprintf(equation, "(%d%c%d)%c%d%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 25 4 plaques
    sprintf(equation, "(%d%c%d)%c(%d%c%d)", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 26 4 plaques
    sprintf(equation, "(%d%c%d%c%d)%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 27 4 plaques
    sprintf(equation, "%d%c(%d%c%d%c%d)", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 28 3 plaques
    sprintf(equation, "%d%c%d%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 29 3 plaques
    sprintf(equation, "(%d%c%d)%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 30 3 plaques
    sprintf(equation, "%d%c(%d%c%d)", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 31 2 plaques
    sprintf(equation, "%d%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 32 6 plaques
    sprintf(equation, "((%d%c%d)%c%d%c%d)%c%d%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5], op(op5), 
            listePlaques[nb6] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 33 6 plaques
    sprintf(equation, "((%d%c%d)%c%d%c%d)%c(%d%c%d)", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5], op(op5), 
            listePlaques[nb6] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    // equation 33 6 plaques
    sprintf(equation, "((%d%c%d%c%d)%c%d%c%d)%c%d", 
            listePlaques[nb1], op(op1), 
            listePlaques[nb2], op(op2), 
            listePlaques[nb3], op(op3), 
            listePlaques[nb4], op(op4), 
            listePlaques[nb5], op(op5), 
            listePlaques[nb6] );
    //printf("equation %2d = %s\n", i, equation);
    strcpy(listeEquations[i++], equation);

    nbEquations = i;
}

//-----------------------------------
//
//      printRoulette
//
//-----------------------------------
int roue = 0;
void printRoulette(void){
    printf("\r");
    switch (roue){
        case 0:
            printf("/");
            break;
        case 1:
            printf("-");
            break;
        case 2:
            printf("\\");
            break;
        case 3:
            printf("|");
            break;
    }
    if (++roue > 3) roue = 0;
}

//-----------------------------------
//
//      calcul
//
//-----------------------------------
void calcul(void){
    int cpt = 0;
    for (int nb1 = 0 ; nb1 < NB_PLAQUES_TIRAGE ; nb1++){
        //printRoulette();
        for (int op1 = 0 ; op1 < 4 ; op1++){
            for (int nb2 = 0 ; nb2 < NB_PLAQUES_TIRAGE ; nb2++){
                if (nb2 == nb1) continue;
                for (int op2 = 0 ; op2 < 4 ; op2++){
                    for (int nb3 = 0 ; nb3 < NB_PLAQUES_TIRAGE ; nb3++){
                        if ((nb3 == nb1) || (nb3 == nb2)) continue;
                        for (int op3 = 0 ; op3 < 4 ; op3++){
                            for (int nb4 = 0 ; nb4 < NB_PLAQUES_TIRAGE ; nb4++){
                                if ((nb4 == nb1) || (nb4 == nb2) || (nb4 == nb3)) continue;
                                for (int op4 = 0 ; op4 < 4 ; op4++){
                                    for (int nb5 = 0 ; nb5 < NB_PLAQUES_TIRAGE ; nb5++){
                                        if ((nb5 == nb1) || (nb5 == nb2) || (nb5 == nb3) || (nb5 == nb4)) continue;
                                        for (int op5 = 0 ; op5 < 4 ; op5++){
                                            for (int nb6 = 0 ; nb6 < NB_PLAQUES_TIRAGE ; nb6++){
                                                if ((nb6 == nb1) || (nb6 == nb2) || (nb6 == nb3) || (nb6 == nb4) || (nb6 == nb5)) continue;
                                                buildEquations(nb1, op1, nb2, op2, nb3, op3, nb4, op4, nb5, op5, nb6);
                                                for (int k = 0 ; k < NB_EQUATIONS ; k++){
                                                    nbEssais++;
                                                    //printf("test de l'equation %s\n", listeEquations[k]);
                                                    int result = resolution(listeEquations[k]);
                                                    //printf("test %d => Le resultat de l'équation %s est %d\n", cpt++,listeEquations[k], result);
                                                    if (meillieurResultat == tirage) {
                                                        printf("Le compte est bon .....\n");
                                                        printf("resultat = %s\n", meillieureEquation);
                                                        numeroEquationResultat = k;
                                                        return;
                                                    } else {
                                                        int tmpResultat = abs(tirage - result);
                                                        int tmpMeillieurResultat = abs(tirage - meillieurResultat);
                                                        if (tmpMeillieurResultat > tmpResultat){
                                                            // memorise ce resultat
                                                            meillieurResultat = result;
                                                            numeroEquationResultat = k;
                                                            strcpy(meillieureEquation, listeEquations[k]);
                                                            //printf("resolutionAvecParentheses => memorise cette equation %s = %d\n", meillieureEquation, result);
                                                            //getchar();
                                                        } else {
                                                            //printf("resolutionAvecParentheses => equation invalide %s\n", listeEquations[k]);
                                                        }
                                                    }
                                                }
                                            }            
                                        }
                                    }
                                }
                            }            
                        }
                    }
                }
            }            
        }
    }
    printf("calcul2 => Le resultat le plus proche est : %d\n", meillieurResultat);
    printf("calcul2 => meilleure équation = %s\n", meillieureEquation);
}
