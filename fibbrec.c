#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int sumEvenFibonacci(int limit, int currentTerm, int nextTerm, int sum) {
    if (currentTerm > limit)
        return sum;
    if (currentTerm % 2 == 0)
        sum += currentTerm;
    return sumEvenFibonacci(limit, nextTerm, currentTerm + nextTerm, sum);
}

int main() {
    int limit;
    printf("Enter the limit for Fibonacci sequence: ");
    scanf("%d", &limit);

    int sum = sumEvenFibonacci(limit, 0, 1, 0);

    printf("Sum of even Fibonacci numbers up to %d: %d\n", limit, sum);

    return 0;
}
