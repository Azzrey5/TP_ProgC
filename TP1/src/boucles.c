#include <stdio.h>

int main() {
    int compteur = 5; // Tu peux changer la valeur (doit être < 10)

    if (compteur >= 10) {
        printf("La valeur de compteur doit être strictement inferieure a 10.\n");
        return 1;
    }

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            // Exemple de motif selon la ligne
            if (i == 3 && j == 2)
                printf("# ");
            else if (i == 4 && (j == 2 || j == 3))
                printf("# ");
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}
