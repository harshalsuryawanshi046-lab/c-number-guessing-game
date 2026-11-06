#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int num = rand() % 100 + 1;

    int guess;
    printf("Enter your guess (1-100)\n\n");

    for (int i = 1; i <= 3; i++)
    {
        printf("Attempt %d: ", i);
        scanf("%d", &guess);
        if (num > guess)
        {
            printf("Too low!\n\n");
        }
        else if (num < guess)
        {
            printf("Too high!\n\n");
        }
        else
        {
            printf("You win\nCorrect guess!");
            break;
        }

        if (num != guess && i == 2)
        {
            if (num >= 1 && num <= 25)
            {
                printf("Hint: between 1-25\n\n");
            }
            else if (num >= 26 && num <= 50)
            {
                printf("Hint: between 26-50\n\n");
            }
            else if (num >= 51 && num <= 75)
            {
                printf("Hint: between 51-75\n\n");
            }
            else if (num >= 76 && num <= 100)
            {
                printf("Hint: between 76-100\n\n");
            }
        }
        if (num != guess && i == 3)
        {
            printf("You lose\nThe correct number is %d", num);
        }
    }
    return 0;
}