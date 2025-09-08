#include <stdio.h>

int main() {
    char T[30];
    int l = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]", T);

    for (int i = 0; T[i] != '\0'; i++) {
        l++;
    }
    printf("La longueur du string est : %d\n", l);
    return 0;
}