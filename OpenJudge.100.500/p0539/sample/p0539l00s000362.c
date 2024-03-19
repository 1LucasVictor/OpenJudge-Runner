#include <stdio.h>
#include <string.h>
#include "math.h"


int main(int argc, char *argv[]){

  int i;
  int n;
  int m, l;

  scanf("%d", &n);

  l = 0;
  for(i=1; i<=9; i++){
    if(n % i == 0){
      m = n/i;
      if(m<=9){
        l++;
      }
    }
  }
  if(l==0){
    printf("No\n");
  }else{
    printf("Yes\n");
  }
  return 0;
}
