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
#include <stdlib.h>
#include <math.h> // log() and ceil()

int main(void) {
    // Declare Variables
    int lowRange = 1;
    int highRange = 100;
    int possibleGuesses = highRange + lowRange - 1; // Range of possible guesses or numbers left
    int maxTurns = ceil(log(possibleGuesses) / log(2)); // log base 2 of possible guesses rounded up
    int guess; // The number that the computer guesses
    int player; // (1) Yes, you guesses my number, (2) No, guess a lower number, (3) No, guess a higher number
    int numTurns = 1; // Keep track of the number of turns/guesses
}