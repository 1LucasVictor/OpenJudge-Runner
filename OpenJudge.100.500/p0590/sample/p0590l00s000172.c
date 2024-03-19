#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>


int main()
{
  int cnt;
  int a,b,c,d,e,k;

  cnt = scanf("%d", &a);
  cnt = scanf("%d", &b);
  cnt = scanf("%d", &c);
  cnt = scanf("%d", &d);
  cnt = scanf("%d", &e);
  cnt = scanf("%d", &k);

  if ((e - a) <= k){
    printf ("Yay!");
  } else {
    printf (":(");
  }

  return 0;
}
