#include <stdio.h>

int main() {
    double taille;
    double poids;
    int imc;
    // lecture du poids et taille
    printf("donner le poids");

    scanf("%lf", &poids);
    printf("donner le taille");

    scanf("%lf", &taille);
    // calcul de l'IMC
     imc = poids / (taille * taille);   
    // affichage de l'IMC
    printf("IMC = %d\n", imc);
     // interpretations
    if(imc <= 18.5)
    printf("maigreur\n");
    else if(imc <= 25)
    printf("normal\n");
    else if(imc <= 30)
    printf("surpoids\n");
    else
    printf("obesite\n");

    
    return 0;
}