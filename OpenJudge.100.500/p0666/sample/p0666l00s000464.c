#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include "unistd.h"
#include "string.h"
#include <math.h>
int ans;
int main(int argc, char* argv[]){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if (b-c>=0) {
    printf("delicious");
    return 0;
  }
  if(a+(b-c)>0){
    printf("safe");
    return 0;
  }else{
    printf("dangerous");
  }
  return 0;
}
