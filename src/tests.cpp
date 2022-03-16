//-----------------------------------
//
//      tests.cpp
//
//-----------------------------------

#include <stdio.h>
#include <ctime>
#include <unistd.h>

#include "../inc/variables.hpp"
#include "../inc/calcul.hpp"
#include "../inc/resolution.hpp"
#include "../inc/tirage.hpp"

int nbTestsPasses=0;

void baniere(char * texte){
    nbTestsPasses++;
    printf("tests => +------------------------------------------------------------+\n");
    printf("tests => |                    test n° %3d                             |\n", nbTestsPasses);
    printf("tests => |    %50s      |\n", texte);
    printf("tests => +------------------------------------------------------------+\n");

}

bool testEquation(int resultatAttendu, char *equation){
    resultat = resolution(equation);
    printf("tests => calcul de %s=%d ; resultat = %d", equation, resultatAttendu, resultat);
    if (resultat == resultatAttendu) {
        printf("  => TEST OK\n");
        return true;
    }else{
        printf("  => TEST NOK\n");
    }
    return false;
}

void tests(void){
    int resultat;
    //-----------------------------------
    //
    //      tests liste des equations
    //
    //-----------------------------------
    if (false){ 
        if (true){
            buildEquations(0,0,1,3,2,1,3,2,4,1,5);
            baniere((char*)"fonction buildEquations (avec parentheses)");
            for (int i = 0 ; i < nbEquations ; i++){
                printf("tests => equation %2d = %s\n", i, listeEquations[i]);
            }
        }
    }
    //-----------------------------------
    //
    //      tests calculs
    //
    //-----------------------------------
    if (false){
        if (true){
            baniere((char*)"calcul d'un cas avec solution");
            testEquation(604,(char*)"((9*2+7)*6+1)*4");
        }

        if (true){
            baniere((char*)"calcul d'un cas avec solution");
            testEquation(691,(char*)"((4+3)*9+6)*10+1");
        }

        if (true){
            baniere((char*)"calcul d'un cas avec solution");
            testEquation(801,(char*)"(4+7)*75-4*(5+1)");
        }

        if (false){
            baniere((char*)"fonction calcul besoin parentheses");
            buildEquations(0,0,1,3,2,1,3,2,4,1,5);
            calcul();
            printf("tests => resultat = %d\n", meillieurResultat);
        }

    }

    //-----------------------------------
    //
    //      tests formatage de nombres
    //
    //-----------------------------------
    if (false){
        baniere((char*)"Test de la fonction de formatage de nombres");
        int nbNombres = 7;
        int listeNb[50] = {1, 12, 123, 1234, 12345, 123456, 123456789};
        for (int i = 0 ; i < nbNombres ; i ++){
            int nb = listeNb[i];
            printf("tests => formatage de %20d => <%s>\n", nb, formatNombre(nb));
        }
    }

    //-----------------------------------
    //
    //      recherche tirage sans solution exacte
    //
    //-----------------------------------
    if (true){
        bool fin = false;
        int i;
        clock_t timeDebut, timeFin;
        float dureeExec, sommeTemps, dureeMin, dureeMax;
        dureeMin = 9999999;
        dureeMax=0;
        baniere((char*)"recherche d'un tirage sans solution exacte");
        int nbTirages = 0;
        while (!fin){
            sleep(1);
            tirage = getTirage();
            tiragePlaques();
            afficheTirage();
            timeDebut = clock();
            calcul();
            nbTirages++;
            timeFin = clock();
            dureeExec = (float)(timeFin - timeDebut) /CLOCKS_PER_SEC;
            if (dureeExec > dureeMax) dureeMax = dureeExec;
            if (dureeExec < dureeMin) dureeMin = dureeExec;
            sommeTemps += dureeExec;
            if (tirage != meillieurResultat){
                printf("%d tirages avec le compte est bon avant d'en avoir un sans solution\n", nbTirages);
                printf("durée totale de ce test %.2f\n", sommeTemps);
                printf("duree max %.2f, duree min %.2f\n", dureeMax, dureeMin);
                printf("durée moynne de résolution d'un tirage %.4f\n", sommeTemps/nbTirages);
                fin = true;
            }
        }
    }

    printf("tests => +------------------------------------------------------------+\n");
    printf("tests => |                  nb tests total %3d                        |\n", nbTestsPasses);
    printf("tests => +------------------------------------------------------------+\n");
}