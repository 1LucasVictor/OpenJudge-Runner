#include <stdio.h>
#include <stdlib.h>

void swap (int *a,int *b);

int main (void){
  int a,b,k;
  int res=0;

  int i;
  if(scanf("%d %d",&a,&b) == 2){
    if ( b < a) swap(&a,&b);
    for(k=a; k<=b; k++){
      if ( abs(a-k) == abs(b-k) ) {
	printf("%d\n",k);
	return 1;
      }
    }
    printf("IMPOSSIBLE\n");
  }
  return 0;
  
}

void swap (int *a,int *b){
  int temp ;
  temp = *a;
  *a = *b;
  *b = temp;

  return;
}
