#include <stdio.h>
int main() {
    float x, minusSum = 0, plusSum = 0;
    int zeroC = 0;

    printf("Enter X: ");
    scanf("%f", &x);

    if (x == 0) {
        zeroC++;
    } else if (x > 0) {
        plusSum += x;
    } else {
        minusSum += x;
    }

    printf("Zero Count: %d\nPlus Sum: %.2f\nMinus Sum: %.2f", zeroC, plusSum, minusSum);

    return 0;
}