#include <stdio.h>

int main() {
    int somme = 0;

    for (int i = 1; i <= 1000; i++) {

        // Si le nombre est divisible par 11, on ignore cette itération
        if (i % 11 == 0) {
            continue; // passe directement au suivant
        }

        // Si le nombre est divisible par 5 ou par 7, on l'ajoute à la somme
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        // Si la somme dépasse 5000, on arrête immédiatement
        if (somme > 5000) {
            printf("La somme a depasse 5000 (valeur actuelle : %d) a i = %d\n", somme, i);
            break; // sort de la boucle
        }
    }

    printf("Somme finale = %d\n", somme);

    return 0;
}
