#include <stdio.h>

int main() {
    char T[30];
    
    
    printf("Enter a string: ");
    scanf("%s", T);

    for (int i = 0; T[i] != '\0'; i++) {
        if(T[i] >= 'a' && T[i] <= 'z') {
            T[i] = T[i] - 32;
        }
        
    }
    printf("La longueur du string est : %s\n", T);
    return 0;
}