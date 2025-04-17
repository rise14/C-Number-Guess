#ifndef MY_STDIO_H
#define MY_STDIO_H

#include <stdio.h> // Include the standard I/O library

int my_stdio_main() {
    printf("Hello from my_stdio.h!\n");
    return 0;
}

#endif // MY_STDIO_H

#include <stdio.h>  // Include the standard I/O library
#include <stdlib.h> // Include the standard library for rand and srand
#include <time.h>   // Include the time library for seeding the random number generator

int main() {
    int number, guess, attempts = 0;

    // Seed the random number generator
    srand(time(0));
    number = rand() % 100 + 1; // Random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 100.\n");

    // Loop until the user guesses correctly
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != number);

    return 0;
}