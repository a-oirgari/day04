#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    
    
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    strcmp(str1 , str2);
    if (strcmp(str1, str2) == 0) {
        printf("The strings are equals.\n");
    } else {
        printf("The strings are not equals.\n");
    }

    
    return 0;
}