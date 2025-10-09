/*
* getting a random number of poker cards
*
*
*/

#include <stdbool.h> /* had an error not using this directives, thought it was only for C99*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
    bool in_hand [NUM_SUITS][NUM_RANKS] = {false}; // 4 x 13
    int num_cards, rank, suit;
    const char rank_code[] = {'2','3','4','5','6','7','8','9','t','j','q','k','a'};
    const char suit_code[] = {'c','d','h','s'}; // const = constant => the value stay constant (like define)

    srand((unsigned) time(NULL)); // random seed (getting randomized number for (time) so we can get random numbers)

    printf ("Enter number of cards in hand: ");
    scanf ("%d", &num_cards);

    printf ("Your hand: ");
    while (num_cards > 0)
    {
        suit = rand() % NUM_SUITS; /*picks a random suit*/
        rank = rand() % NUM_RANKS; /*picks a random rank*/
        if (!in_hand[suit][rank]) // in_hand[suit]
        {
            in_hand[suit][rank] = true;
            num_cards--;
            printf(" %c%c", rank_code[rank], suit_code[suit]);
        }
    }
    printf("\n");

    return 0;
}