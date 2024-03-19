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
  scanf("%ld %ld",&a,&b);
  printf("%ld",(a*(a+1))%2019);
}
