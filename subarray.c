#include <stdio.h>

void longIncSub(int arr[], int n) {
    int maxLength = 1;
    int currentLength = 1;
    int endIndex = 0;
    int i;

    for (i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                endIndex = i - 1;
            }
            currentLength = 1;
        }
    }
    if (currentLength > maxLength) {
        maxLength = currentLength;
        endIndex = n - 1;
    }
    printf("Longest increasing subarray is: ");
    for (i = endIndex - maxLength + 1; i <= endIndex; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 6, 3, 5, 7, 8, 9, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    longIncSub(arr, n);

    return 0;
}
