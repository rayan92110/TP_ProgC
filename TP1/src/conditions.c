#include <stdio.h>

int main() {
    int i;
    int somme = 0;

    for (i = 1; i <= 1000; i++) {

        if (i % 11 == 0) {
            continue;  // on saute ce nombre
        }

        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        if (somme > 5000) {
            printf("La somme a dépassé 5000, arrêt.\n");
            break;
        }
    }

    printf("Somme finale = %d\n", somme);

    return 0;
}
