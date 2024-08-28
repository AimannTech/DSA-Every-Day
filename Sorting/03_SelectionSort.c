#include <stdio.h>

/**
 * Main function to demonstrate sorting of an array using Selection Sort.
 * 
 * This function takes an array of integers from the user, prints the array before sorting,
 * sorts the array using Selection Sort, and then prints the sorted array.
 */
void main() {
    int a[20], i, j, n, min_idx, temp;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the elements of the array
    for (i = 0; i < n; i++) {
        printf("Enter the number: ");
        scanf("%d", &a[i]);
    }

    // Print the array before sorting
    printf("\nBefore sorting: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    // Sort the array using Selection Sort
    for (i = 0; i < n-1; i++) {
        // Find the minimum element in the unsorted part of the array
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (a[j] < a[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        temp = a[min_idx];
        a[min_idx] = a[i];
        a[i] = temp;
    }

    // Print the array after sorting
    printf("\nAfter sorting: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
}
