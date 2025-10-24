#include <stdio.h>
#include <stdbool.h> // pour utiliser le type bool

int main() {
    int a = 16;
    int b = 3;

    // Opérateurs arithmétiques
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b); // division entière
    printf("a %% b = %d\n", a % b); // %% pour afficher %

    // Opérateurs logiques / de comparaison
    bool egal = (a == b);
    bool superieur = (a > b);

    printf("a == b : %s\n", egal ? "true" : "false");
    printf("a > b  : %s\n", superieur ? "true" : "false");

    return 0;
}
