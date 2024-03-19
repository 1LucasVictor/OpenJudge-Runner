#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//ABC165D
//ABC165C
//ABC165B

//ABC165A
int main(void) {
  int n, k, a, b, i, cou=0, tmp;
  scanf("%d %d %d", &k, &a, &b);
  for(i=a; i<=b; i++){
    if(i%k==0){
      printf("OK");
      return 0;
    }

  }
  printf("NG");
}