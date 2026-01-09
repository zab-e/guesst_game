#include <stdio.h>


#define white "\033[37m"
#define reset "\033[0m"
#define blue "\033[34m"
#define red "\033[31m"
#define yellow "\033[33m"
#define green "\033[32m"

void run_code()
{
    int guessing_number = 8;
    int userguess;
    int max_guesses = 3;

    printf("\033[36m");
    printf("########################################\n");
    printf("#                                      #\n");
    printf("#    WELCOME TO THE GUESSING GAME     #\n");
    printf("#                                      #\n");
    printf("########################################\n\n");
    printf("\033[0m");

    for (int attempts = 1; attempts <= max_guesses; attempts++)
    {

        printf(blue "Guess a number between 1 and 10:\n" reset);
        scanf("%d", &userguess);
        if (userguess == guessing_number)
        {
            printf(green "You win!!\n" reset);
            return;
        }
        else if (userguess > 8)
        {
            printf(red "ERROR:too high\n" reset);
        }
        else if (userguess < 8)
        {
            printf(red "ERROR:too low\n" reset);
        }
        else if (userguess == 0)
        {
            printf(red "ERROR:invalid number\n" reset);
        }
        if (attempts == max_guesses)
        {
            printf(red "GAME OVER! Max attempts reached.\n" reset);
        }
    }
}

int main()
{
    run_code();
    return 0;
}