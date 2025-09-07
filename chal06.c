#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char c;
    int temp = 0;
    
    
    printf("Enter the string: ");
    scanf("%s", str);
    printf("Enter the caracter: ");
    scanf(" %c", &c);

    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            temp++;
        }
    }
    printf("le nombre d'occurence est : %d\n", temp);

    
    return 0;
}