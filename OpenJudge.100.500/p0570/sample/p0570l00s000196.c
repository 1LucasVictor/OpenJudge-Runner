#include <stdio.h>
#include <stdlib.h>

void swap (long int *a,long int *b);

int main (void){
  long int a,b,k;
  int res=0;

  int i;
  if(scanf("%ld %ld",&a,&b) == 2){
    if ( b < a) swap(&a,&b);
    for(k=0; k<=b; k++){
      if ( abs(a-k) == abs(b-k) ) {
	printf("%ld\n",k);
	return 1;
      }
    }
    printf("IMPOSSIBLE\n");
  }
  return 0;
  
}

void swap (long int *a,long int *b){
  int temp ;
  temp = *a;
  *a = *b;
  *b = temp;

  return;
}
