//
// Created by 12777 on 2022/9/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int high = 100;
    int number_of_tries = 7;
            printf("Let us play the Guess the Number game.\n"
                   "The computer will generate the number between 1 and %d.\n"
                   "You have %d tries.\n", high, number_of_tries);
    time_t *timer = NULL;
    srand(time(timer: NULL));
    int secret = rand() % high + 1;
    printf("Test: secret = %d.\n", secret);
    printf("Please input your guess.\n"
           "You still have number_of_tries ");
    While (number_of_tries > 0)
    int guess = 0;
    scanf("%d", &guess);
    printf("Your guess is %d.\n", guess);

    if (guess == secret) {
        printf("You Win!\n");
    }
    else if(guess > secret) {
        printf("guess > secret\n");
    }
            else{
                printf("guess < secret\n");
            }
    number_of_tries


    /* print the rules of the game to players
     * generate a random number between 1 and high as the secret number
     * ask the player to input a guess
     * obtain the guessed number
     * compare it with the secret number
     * and inform the player of the result
     * repeat 3-4 until the player wins or loses
     */



}