#include <stdio.h>

int main() {
    int entier;
    float decimal;
    double doubleDecimal;
    char caractere;
    
    char chaine[100];
    printf("Entrez un entier: ");
    scanf("%d", &entier);
    printf("Entrez un nombre décimal: ");
    scanf("%f", &decimal);
    printf("Entrez un double décimal: ");
    scanf("%lf", &doubleDecimal);
    printf("Entrez un caractère: ");
    scanf(" %c", &caractere);
    printf("Entrez une chaîne de caractères: ");
    scanf(" %s", chaine);
    //affichage des valeurs
    printf("Entier: %d\n", entier); // %d pour afficher un entier `\n pour un retour à la ligne
    printf("Nombre décimal: %f\n", decimal);
    printf("Double décimal: %lf\n", doubleDecimal);
    printf("Caractère: %c\n", caractere);
    printf("Chaîne de caractères: %s\n", chaine);



    return 0;
}