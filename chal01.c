#include <stdio.h>
#include <string.h>

int main() {
    char  T[30];
    int l;
    printf("donner le string: ");
    scanf("%s", T);
    
    l = strlen(T);
    for (int i = 0; i < l; i++){
        printf(" %c\n", T[i]);
    }
    
    return 0;
}