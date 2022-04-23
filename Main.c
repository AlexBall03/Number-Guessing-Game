/*
    Think of a number from 1 to 100, you can guess you number within 7 turns

    Is your number 50?
    No, guess a higher number

    Is your number 75?
    No, guess a higher number

    Is your number 88?
    No, guess a lower number

    Is your number 81?
    Yes, you guess my number within 7 turns! (You guessed it in 4 turns)
    --------------------------------------------------------------------------
    HOW THIS WORKS:
    Think of a number from 1 to 100, you can guess you number within 7 turns.

    Is your number roundUp(100 + 1 - 1) / 2 == 50? Range 1 to 100
    No, guess a higher number (newRange = 51 to 100)(50 possible guesses)

    Is your number roundUp(100 + 51 - 1) / 2 == 75? Range 51 to 100
    No, guess a higher number  (newRange = 76 to 100)(25 possible guesses)

    Is your number roundUp(100 + 76 - 1) / 2 == 87.5 == 88? Range 76 to 100
    No, guess a lower number (newRange = 76 to 87) (12 possible guesses)

    Is your number roundUp(87 + 76 -1) / 2 == 81?
    Yes, you guess my number within 7 turns! (You guessed it in 4 turns)
*/

#include <stdio.h>

int main() {
    printf("Hello World!");

    return 0;
}