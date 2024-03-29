#include <stdio.h>

int countWays(int numbers[], int size, int target) {
   
    if (target == 0) {
        return 1;
    }

    if (target < 0 || size <= 0) {
        return 0;
    }

    
    return countWays(numbers, size - 1, target - numbers[size - 1]) +
           countWays(numbers, size - 1, target);
}

int main() {
    int numbers[] = {1, 2, 3};
    int target = 4;
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int ways = countWays(numbers, size, target);
    printf("Number of ways to reach target sum %d: %d\n", target, ways);

    return 0;
}
