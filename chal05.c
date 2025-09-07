#include <stdio.h>
#include <string.h>

int main() {
    char T[100];
    int l;
    
    printf("Enter a string: ");
    scanf("%s", T);
    l = strlen(T);
    printf("l'inverse du string est : ");
    for (int i = l-1; i >= 0;  i--) {
        printf("%c", T[i]);
    }
    
    return 0;
}