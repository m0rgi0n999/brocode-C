#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    //uses curent time as a seed
    srand(time(0));

    //generate number between MIN and MAX
    answer = (rand() % MAX) + MIN;

    do{
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if(guess > answer)
        {
            printf("To high!");
        }
        else if(guess < answer) 
        {
            printf("To low!");
        }
        else
        {
            printf("CORRECT!");
        }
        guesses++;
    }while(guess != answer);

    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);

    printf("\n");
    return 0;
}