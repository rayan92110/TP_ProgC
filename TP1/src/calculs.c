#include <stdio.h>

int main() {
    int num1 = 10, num2 = 3;
    char op = '*';
    int resultat;

    switch (op) {

        case '+':
            resultat = num1 + num2;
            break;

        case '-':
            resultat = num1 - num2;
            break;

        case '*':
            resultat = num1 * num2;
            break;

        case '/':
            if (num2 != 0)
                resultat = num1 / num2;
            else {
                printf("Erreur : division par 0\n");
                return 1;
            }
            break;

        case '%':
            resultat = num1 % num2;
            break;

        case '&':
            resultat = num1 & num2;
            break;

        case '|':
            resultat = num1 | num2;
            break;

        case '~':
            resultat = ~num1;
            break;

        default:
            printf("Operateur inconnu.\n");
            return 1;
    }

    printf("Résultat = %d\n", resultat);
    return 0;
}


