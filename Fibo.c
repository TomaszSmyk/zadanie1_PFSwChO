#include <stdio.h>
int main() {
//komentarz
  int i, ileElem;
  unsigned long long prevElem = 0, nextElem = 1;
  unsigned long long nthElem = prevElem + nextElem;
  printf("Program do obliczenia entej liczby ciago Fibonnaciego");
  printf("\nWykonal Tomasz Smyk I2S 2.4");
  printf("\nPodaj ktory element ciagu Fibonnaciego chcesz poznac:");
  scanf(" %d", &ileElem);
  for (i = 3; i <= ileElem; ++i) {
    prevElem = nextElem;
    nextElem = nthElem;
    nthElem = prevElem + nextElem;
  }
  printf("Element %d ciagu Fibonnaciego: %llu \n", ileElem, nthElem);
  return 0;
}
