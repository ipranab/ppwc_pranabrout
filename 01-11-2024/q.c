#include <stdio.h>
int main() {
    char c1[20];
    char c2[20];
    int i;
    printf("Enter string c1: ");
    fgets(c1, sizeof(c1), stdin);

    for (i = 0; c1[i] !='\0'; i++) {
        c2[i] = c1[i];
    }
    printf("String c2: %s", c2);
}
