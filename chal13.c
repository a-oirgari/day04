#include <stdio.h>

typedef struct {
    int longueur;
    int largeur;
}rectangle;

int aire(rectangle r);

int main() {
    
    rectangle r;
    printf("Entrer la longueur: ", r.longueur);
    scanf("%d", &r.longueur);
    printf("Entrer la largeur: ", r.largeur);
    scanf("%d", &r.largeur);

    
    printf("L'aire du rectangle est: %d\n", aire(r));
    return 0;
}

int aire(rectangle r) {
    return r.longueur * r.largeur;
}