#include <stdio.h>

void findIntersection(int *arr1, int size1, int *arr2, int size2) {
    printf("Intersection of the two arrays: ");
    for (int *p1 = arr1; p1 < arr1 + size1; p1++) {
        for (int *p2 = arr2; p2 < arr2 + size2; p2++) {
            if (*p1 == *p2) {
                printf("%d ", *p1);
                break;
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

    findIntersection(arr1, size1, arr2, size2);

    return 0;
}
