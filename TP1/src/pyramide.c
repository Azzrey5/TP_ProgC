#include <stdio.h>

int main() {
    int n = 5; // hauteur de la pyramide
    int i, j;

    for (i = 1; i <= n; i++) {
        // 1️⃣ Affichage des espaces pour centrer la pyramide
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2️⃣ Affichage des nombres croissants de 1 à i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3️⃣ Affichage des nombres décroissants de i-1 à 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // 4️⃣ Passage à la ligne suivante
        printf("\n");
    }

    printf("\nGeneration de la pyramide terminee.\n");

    return 0;
}

