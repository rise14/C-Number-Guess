#ifndef STDLIB_H
#define STDLIB_H

#include <stdlib.h> // Include the standard library

// Declare the process_array function
void process_array();

#endif // STDLIB_H

int main() {
    int *arr = malloc(5 * sizeof(int));
    if (arr == NULL) {
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        arr[i] = i * i;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}