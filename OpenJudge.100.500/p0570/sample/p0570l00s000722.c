#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include "unistd.h"
#include "string.h"
#include <math.h>
int ans=0;
int main(int argc, char* argv[]){
  long a,b,c,sum;
  scanf("%ld %ld",&a,&b);
  if (a%2==0 && a&2==1) {
    printf("IMPOSSIBLE");
    return 0;
  }
  if (a%2==1 && a&2==0) {
    printf("IMPOSSIBLE");
    return 0;
  }
  printf("%ld\n",(a+b)/2);
}
