#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include "unistd.h"
#include "string.h"
#include <math.h>
int ans;
int main(int argc, char* argv[]){
  long int a=0,b,c;
  scanf("%ld %ld %ld",&a,&b,&c);
  if (b+c<a) {
    printf("0");
    return 0;
  }
  printf("%d\n",(b+c)-a);
}
