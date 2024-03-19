/*  AtCoder Beginner Contest 133 A - T or T
    2019.07.24 by meyon  */

#include <stdio.h>

int main()
{
  // data input and judgment
  int N;    // number of people
  int A;    // train fare
  int B;    // taxi fare
  scanf("%d %d %d", &N, &A, &B);
  if(N<1 || N>20 || A<1 || A>50 || B<1 || B>50) {
    printf("Error!\n");
    return 1;
  }

  // extract the lowest fare
  int lowestFare = N * A;
  if(lowestFare > B) {
    lowestFare = B;
  }

  // display the lowest fare
  printf("%d\n", lowestFare);

  return 0;
}
