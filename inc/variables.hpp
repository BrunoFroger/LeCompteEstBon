//-----------------------------------
//
//      variables.hpp
//
//-----------------------------------


#ifndef __VARIABLES__
    #define __VARIABLES__

    #define NB_PLAQUES_TIRAGE   6
    #define NB_PLAQUES_JEU      24
    #define NB_EQUATIONS        35

    extern int nbPlaquesTirage;
    extern int plaques[];
    extern int tirage;
    extern char operations[];
    extern int resultat;
    extern int meillieurResultat;
    extern bool testMode;
    extern bool verboseMode;
    extern int nbEssais;
    extern int nbEquations;

    extern int listePlaques[];
    extern char listeOperation[];
    extern char equation[];
    extern char listeEquations[NB_EQUATIONS][50];
    extern char meillieureEquation[];
    extern int numeroEquationResultat;

    extern void initVariables(void);
    extern char * formatNombre(int nb);

#endif
