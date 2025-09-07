#include <stdio.h>
#include <string.h>

int main() {
    char T[100];
    int l = 0;
    
    printf("Enter a string: ");
    fgets(T, sizeof(T), stdin);

    l = strlen(T);
    for (int i = 0; T[i] != '\0'; i++) {
        if (T[i] == ' ') {
            for (int j = i; T[j] != '\0'; j++){
                T[j] = T[j+1];
            }
            l--;
        }
        
    }
    printf("La string sans espace est : %s\n", T);
    return 0;
}