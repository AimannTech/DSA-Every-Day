#include <stdio.h>

/**
 * @brief Main function to demonstrate sorting of an array.
 * 
 * This function takes an array of integers from the user, prints the array before sorting,
 * sorts the array using Bubble Sort, and then prints the sorted array.
 */
void main() {
    int a[20], i, j, n, temp;

    // Prompt the user to enter the number of elements
    printf("enter the number of elements:");
    scanf("%d", &n);

    // Input the elements of the array
    for (i = 0; i < n; i++) {
        printf("enter the number:");
        scanf("%d", &a[i]);
    }

    // Print the array before sorting
    printf("\n before sorting:");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    // Sort the array using Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Print the array after sorting
    printf("\n after sorting:");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
}
