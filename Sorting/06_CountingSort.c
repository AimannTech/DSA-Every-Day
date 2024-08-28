#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Function to find the maximum value in an array.
 * 
 * @param arr The array to search.
 * @param n The number of elements in the array.
 * @return The maximum value in the array.
 */
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

/**
 * @brief Function to perform Counting Sort on an array.
 * 
 * @param arr The array to sort.
 * @param n The number of elements in the array.
 */
void countingSort(int arr[], int n) {
    int max = findMax(arr, n);
    int *count = (int *)calloc(max + 1, sizeof(int));
    int *output = (int *)malloc(n * sizeof(int));

    // Count the occurrences of each element
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Update the count array to contain the actual positions of elements
    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy the sorted elements back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }

    // Free the dynamically allocated memory
    free(count);
    free(output);
}

int main() {
    int n;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        printf("Enter the number: ");
        scanf("%d", &arr[i]);
    }

    // Print the array before sorting
    printf("\nBefore sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    // Sort the array using Counting Sort
    countingSort(arr, n);

    // Print the array after sorting
    printf("\nAfter sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}
