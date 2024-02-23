#include <stdio.h>


int sumEvenFibonacci(int limit) {
    int prev = 1; 
    int current = 2; 
    int sum = 0; 
    
    
    while (current <= limit) {
        if (current % 2 == 0) { 
            sum += current; 
        }
        int next = prev + current;
        prev = current;
        current = next;
    }
    
    return sum;
}

int main() {
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    
    int result = sumEvenFibonacci(limit);
    printf("Sum of even Fibonacci numbers up to %d is: %d\n", limit, result);
    
    return 0;
}
