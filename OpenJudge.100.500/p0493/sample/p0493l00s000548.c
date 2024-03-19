#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include "unistd.h"
#include "string.h"
#include <math.h>
int ans;
int i=0;
int main(int argc, char* argv[]){
  long int a=0,b=0,c=0;
  char s[7];
  scanf("%ld",&a);
  b=a/500;
  c=a%500;
  c=c/5;
  printf("%d",b*1000+c*5);
}
