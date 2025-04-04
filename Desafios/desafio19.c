#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
    int attempts, guess, seed, wins = 0;
    srand(time(NULL));
    int playAgain = 1;
    char choice;
    printf("WELCOME!\n");
    while (playAgain)
    {
        int seed = (rand() % 100) + 1;
        attempts = 0;
        Sleep(1300);
        printf("Loading...\n");
        Sleep(1300);
        printf("Seed generated sucesfully! Seed: %d\n", seed);
        printf("\nChoose a number between [1 and 100]\n");
        printf("You have 7 tries to guess it\n");
        while (attempts < 7)
        {
            printf("\nAttempt %d: Enter your guess: ", attempts + 1);
            scanf(" %d", &guess);
            if (guess == seed)
            {
                printf("You guessed it!\n");
                wins++;
                break;
            }
            else if (guess > seed)
            {
                printf("Too high!\n");
            }
            else
            {
                printf("Too low!\n");
            }
            attempts++;
        }
        if (guess != seed)
        {
            printf("\nYou've used all your attempts. The number was %d.", seed);
        }
        // ask to play again
        printf("\nDo you want to play again? [y/n]: ");
        scanf(" %c", &choice);
        if (choice != 'y' && choice != 'Y')
        {
            playAgain = 0;
        }
    }
    printf("\nThanks for playing!\n");
    printf("Your score:\n");
    printf("You won %d time(s).\n", wins);

    return 0;
}
