#include <stdio.h>

int main() {
    int compteur = 5;  // valeur test, < 10
    int i, j;

    printf("=== Version avec FOR ===\n");
    for (i = 1; i <= compteur; i++) {

        for (j = 1; j <= i; j++) {
            // Exemple du sujet : ligne 3 et 4 utilisent des #
            if (i == 3 || i == 4) {
                if (j == 1 || j == i) printf("* ");
                else printf("# ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    printf("\n=== Version avec WHILE ===\n");

    i = 1;
    while (i <= compteur) {
        j = 1;

        while (j <= i) {
            if (i == 3 || i == 4) {
                if (j == 1 || j == i) printf("* ");
                else printf("# ");
            } else {
                printf("* ");
            }
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
