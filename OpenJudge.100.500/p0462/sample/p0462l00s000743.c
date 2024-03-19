#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void) {

  long int a, c, e=pow(10,15);
  float b;
  int d, f;

  f = scanf("%ld%f", &a, &b);

  if ((f!=2)||(a<0)||(e<a)||(b<0)||(10<b)) {
    printf("error\n");
    return -1;
  }

  d = b*100;
  c = a*d/100;

  printf("%ld\n", c);

  return 0;
}
