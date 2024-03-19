#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include "unistd.h"
#include "string.h"
#include <math.h>
int ans;
int main(int argc, char* argv[]){
  long int a,b,c;
  scanf("%ld %ld %ld",&a,&b,&c);
  if (a>c) {
    printf("NO" );
    return 0;
  }
  if (a+b>=c) {
    printf("YES");
  }else{
    printf("NO" );
  }
}
