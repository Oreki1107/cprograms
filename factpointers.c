#include <stdio.h>

void findFactorial(int num, unsigned long long *result) {
    *result = 1;
    for (int i = 1; i <= num; i++) {
        *result *= i; 
    }
}

int main() {
    int num;
    unsigned long long factorial;

    printf("Enter a number: ");
    scanf("%d", &num);

    findFactorial(num, &factorial);

    printf("Factorial of %d = %llu\n", num, factorial);

    return 0;
}
