#include <stdio.h>

int main() {
    int v1;
    int v2;
    int tmp;
    printf("Entrez la valeur de v1: ");
    scanf("%d", &v1);
    printf("Entrez la valeur de v2: ");
    scanf("%d", &v2);
    printf("Avant permutation: v1 = %d, v2 = %d\n", v1, v2);
    tmp = v1;
    v1 = v2;
    v2 = tmp;
    printf("Après permutation: v1 = %d, v2 = %d\n", v1, v2);
    return 0;
}