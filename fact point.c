#include <stdio.h>

void factorial(int num, unsigned long long *result) {
    *result = 1; 

    for (int i = 1; i <= num; ++i) {
        *result *= i;
    }
}

int main() {
    int number;
    unsigned long long fact = 1;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    factorial(number, &fact);

    printf("Factorial of %d is: %llu\n", number, fact);

    return 0;
}
