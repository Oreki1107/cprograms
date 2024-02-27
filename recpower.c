#include <stdio.h>

// Recursive function to calculate power using the naive approach
double power(double base, int exponent) {
    // Base case: if exponent is 0, return 1
    if (exponent == 0)
        return 1;
    // Recursive case: calculate power using recursion
    return base * power(base, exponent - 1);
}

int main() {
    double base;
    int exponent;

    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Calculate power using the naive approach
    double result = power(base, exponent);

    printf("Result: %.2lf\n", result);

    return 0;
}
