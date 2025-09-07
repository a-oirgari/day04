#include <stdio.h>
#include <string.h>
int main() {
    char str1[100];
    char str2[30];
    
    
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    strcat(str1, str2);
    printf("the result is : %s\n", str1);
    return 0;
}