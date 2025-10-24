#include <stdio.h>

void afficherBinaire(unsigned int n) {
    // On affiche 32 bits (taille standard d'un int sur la plupart des systèmes)
    int i;
    int bits = sizeof(n) * 8; // nombre total de bits dans un int

    printf("En binaire : ");
    for (i = bits - 1; i >= 0; i--) {
        // On décale à droite et on masque le bit de poids faible
        unsigned int bit = (n >> i) & 1;
        printf("%u", bit);

        // On ajoute un espace toutes les 8 positions pour lisibilité
        if (i % 8 == 0)
            printf(" ");
    }
    printf("\n");
}

int main() {
    unsigned int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        printf("Nombre : %u\n", nombres[i]);
        afficherBinaire(nombres[i]);
        printf("\n");
    }

    return 0;
}
