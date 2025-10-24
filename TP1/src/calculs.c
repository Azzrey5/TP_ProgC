

#include <stdio.h>

int main() {
    int num1 = 12;
    int num2 = 4;
    char op = '*'; // change cette valeur pour tester différents cas

    int resultat; // variable pour stocker le résultat

    switch (op) {
        case '+':
            resultat = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, resultat);
            break;

        case '-':
            resultat = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, resultat);
            break;

        case '*':
            resultat = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, resultat);
            break;

        case '/':
            if (num2 != 0) {
                resultat = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : division par zero !\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                resultat = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : modulo par zero !\n");
            }
            break;

        case '&':
            resultat = num1 & num2;
            printf("%d & %d = %d\n", num1, num2, resultat);
            break;

        case '|':
            resultat = num1 | num2;
            printf("%d | %d = %d\n", num1, num2, resultat);
            break;

        case '~':
            // L'opérateur ~ est unaire (agit sur un seul nombre)
            printf("~%d = %d\n", num1, ~num1);
            printf("~%d = %d\n", num2, ~num2);
            break;

        default:
            printf("Erreur : operateur '%c' non reconnu.\n", op);
    }

    return 0;
}
