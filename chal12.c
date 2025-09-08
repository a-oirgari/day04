#include <stdio.h>

typedef struct {
    char nom[10];
    char prenom[10];
    int notes[5];
}etudiant;

int main() {
    etudiant p;
    printf("prénom: %s", p.prenom);
    scanf("%s", p.prenom);
    printf("nom: %s", p.nom);
    scanf("%s", p.nom);
    for (int i = 0; i < 5; i++) {
        printf("note %d: ", i + 1);
        scanf("%d", &p.notes[i]);
    }
    for(int i=0; i<5; i++){
        printf("note %d: %d\n", i + 1, p.notes[i]);
    }
    return 0;
}