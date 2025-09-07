#include <stdio.h>

typedef struct {
    char T[20];
    char B[10];
    int age;
}person;

int main() {
    person p1 = { "abderrahman", "oirgari", 27 };
    printf("prénom: %s\n", p1.T);
    printf("nom: %s\n", p1.B);
    printf("Age: %d\n", p1.age);
    return 0;
}