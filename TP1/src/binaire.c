#include <stdio.h>

void afficherBinaire(int n) {
    printf("%d en binaire = ", n);

    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int tests[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < taille; i++) {
        afficherBinaire(tests[i]);
    }

    return 0;
}
