#include "stdio.h"
#include "stdlib.h" // Include standard library for malloc and free

// Function to allocate, process, and print an array
void process_array() {
    int *arr = malloc(5 * sizeof(int)); // Allocate memory for 5 integers
    if (arr == NULL) { // Check if memory allocation failed
        fprintf(stderr, "Memory allocation failed\n"); // Use stderr for error messages
        return;
    }

    // Populate the array with squares of indices
    for (int i = 0; i < 5; i++) {
        arr[i] = i * i;
    }

    // Print the array elements
    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);
}

int main() {
    process_array(); // Call the function to process the array
    return 0;
}