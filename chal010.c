#include <stdio.h>
#include <string.h>

int main() {
    char T[100];
    char B[30];
    
    printf("Entrez une chaîne de caractères : ");
    fgets(T, sizeof(T), stdin);

    int l = strlen(T);
    if (l > 0 && T[l - 1] == '\n') {
        T[l - 1] = '\0';
    }

    printf("Entrez une sous-chaîne à chercher : ");
    fgets(B, sizeof(B), stdin);
    
    int l2 = strlen(B);
    if (l2 > 0 && B[l2 - 1] == '\n') {
        B[l2 - 1] = '\0';
    }

    if (strstr(T, B) != NULL) {
        printf("La sous-chaîne existe dans la chaîne principale.\n");
    } else {
        printf("La sous-chaîne n'existe pas dans la chaîne principale.\n");
    }

    return 0;
}
