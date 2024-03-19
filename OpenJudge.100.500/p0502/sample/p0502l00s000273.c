#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include "unistd.h"
#include "string.h"
#include <math.h>
int ans;
int main(int argc, char* argv[]){
  long int a=0,b=0,c=0;
  scanf("%ld",&a);
  long int d[a];
  for (int i = 0; i < a; i++) {
    scanf("%ld",&d[i]);
    if (d[i]%2!=0) {
      d[i]=3;
    }
    if ((d[i]%3!=0)&&(d[i]%5!=0)) {
      c=1;
    }
  }
  if (c==0) {
    printf("APPROVED" );
  }else{
    printf("DENIED\n" );
  }

}
