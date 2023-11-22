#ifndef DECKER_H
#define DECKER_H

#include <stdlib.h>

/**
 * enum my_kind_e - Enumeration of card suits.
 * @SPADE: Spades suit.
 * @HEART: Hearts suit.
 * @CLUB: Clubs suit.
 * @DIAMOND: Diamonds suit.
 */
typedef enum my_kind_e
{
SPADE = 0,
HEART,
CLUB,
DIAMOND
} my_kind_t;

/**
 * struct my_card_s - Playing card
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct my_card_s
{
const char *value;
const my_kind_t kind;
} my_card_t;

/**
 * struct my_deck_node_s - Deck of card
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct my_deck_node_s
{
const my_card_t *card;
struct my_deck_node_s *prev;
struct my_deck_node_s *next;
} my_deck_node_t;

void my_sort_deck(my_deck_node_t **deck);

#endif /* DECK_H */
