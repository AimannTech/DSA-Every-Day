#include <stdio.h>

/**
 * Main function to demonstrate sorting of an array using Insertion Sort.
 * 
 * This function takes an array of integers from the user, prints the array before sorting,
 * sorts the array using Insertion Sort, and then prints the sorted array.
 */
void main() {
    int a[20], i, j, n, key;

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

    // Sort the array using Insertion Sort
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;

        // Move elements of a[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }

    // Print the array after sorting
    printf("\nAfter sorting: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
}
