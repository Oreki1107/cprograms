#include <stdio.h>

int sumEven(int start, int end) {
    if (start > end)
        return 0;
    if (start % 2 == 0)
        return start + sumEven(start + 2, end);
    return sumEven(start + 1, end);
}

int main() {
    int start, end;

    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    int sum = sumEven(start % 2 == 0 ? start : start + 1, end);

    printf("Sum of even numbers from %d to %d: %d\n", start, end, sum);

    return 0;
}
