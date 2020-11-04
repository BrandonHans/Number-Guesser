#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int guesses = 5;
    int guess;
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber = rand() % 21;

    do {
        printf("Guess a number from 0 to 20: \n");
        scanf("%d", &guess);

        if (guess > 21 || guess < 0) { //Checking for correct input.
            printf("You entered a wrong value, try again.\n");
            printf("Guesses remaining: %d\n", guesses);

        } else {
            guesses--;
            if (guess > randomNumber) {
                printf("Guess lower!\n");
                printf("Guesses remaining: %d\n", guesses);

            } else if (guess < randomNumber) {
                printf("Guess Higher!\n");
                printf("Guesses remaining: %d\n", guesses);

            } else {
                printf("You guessed the correct number!\n");
                break;
            }
        }


    } while (guesses > 0);


    return 0;
}
