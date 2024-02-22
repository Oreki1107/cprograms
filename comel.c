#include <stdio.h>

// Function to find common elements between two arrays
void findCommonElements(int arr1[], int arr2[], int size1, int size2) {
    printf("Common elements: ");
    
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break; // Break to avoid duplicates
            }
        }
    }
    
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    findCommonElements(arr1, arr2, size1, size2);

    return 0;
}
