#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess, guesses, answer;
    const int min =1;
    const int max =100;

    srand(time(0));

    answer = (rand() % max) + min;
    //printf("%d\n",answer); 

    do
    {
        printf("Enter guess : ");
        scanf("%d", &guess);

        if (guess > answer)
        {
            printf("It\'s too high!\n");
        }
        else if(guess < answer)
        {
            printf("It\'s too low!\n");
        }
        else{
            printf("Guess number is Correct! You win!\n\n");
        }
        guesses++;
    } while (guess != answer);
    printf("********************\n");
    printf("Answer : %d\n", answer);
    printf("Guessed teams : %d\n", guesses);
    printf("********************\n\n");

return 0;
}