#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//ABC168D
//ABC168C
//ABC168B
//ABC168A

int main(void) {
  int n, k, i, cou=0, tmp;
  scanf("%d", &n);
  n%=10;
  if(n==2||n==4||n==5||n==7||n==9)printf("hon");
  else if(n==3)printf("bon");
  else printf("pon");

}
