#include <stdio.h>

// Function to find the majority element
int findMajorityElement(int arr[], int size) {
    int candidate = arr[0];
    int count = 1;

    // Find a candidate majority element
    for (int i = 1; i < size; i++) {
        if (arr[i] == candidate)
            count++;
        else {
            count--;
            if (count == 0) {
                candidate = arr[i];
                count = 1;
            }
        }
    }

    // Verify if the candidate is actually a majority element
    count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == candidate)
            count++;
    }

    if (count > size / 2)
        return candidate;
    else
        return -1; // No majority element found
}

int main() {
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int majorityElement = findMajorityElement(arr, size);
    if (majorityElement != -1)
        printf("Majority element: %d\n", majorityElement);
    else
        printf("No majority element found\n");

    return 0;
}
