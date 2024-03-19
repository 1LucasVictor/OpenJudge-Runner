#include <stdio.h>

int toPosition(char, int);
void printCard(int);

int main(void) {
  int numberOfCards, i;
  int cards[52] = {};
  scanf(" %d", &numberOfCards);
  for (i = 0; i < numberOfCards; i++) {
    char suit;
    int number;
    scanf(" %c %d", &suit, &number);
    cards[toPosition(suit, number)] = 1;
  }
  for (i = 0; i < 52; i++) {
    if (!cards[i])
      printCard(i);
  }
  return 0;
}

int toPosition(char suit, int number) {
  switch (suit) {
  case 'S':
    return number - 1;
  case 'H':
    return 13 + number - 1;
  case 'C':
    return 26 + number - 1;
  case 'D':
    return 39 + number - 1;
  }
  return -1;
}

void printCard(int position) {
  int suitNum = position / 13;
  switch (suitNum) {
  case 0:
    printf("S %d\n", position % 13 + 1);
    break;
  case 1:
    printf("H %d\n", position % 13 + 1);
    break;
  case 2:
    printf("C %d\n", position % 13 + 1);
    break;
  case 3:
    printf("D %d\n", position % 13 + 1);
    break;
  }
}

