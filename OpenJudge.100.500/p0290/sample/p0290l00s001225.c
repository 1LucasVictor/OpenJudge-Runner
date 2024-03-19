#include <stdio.h>
#include <math.h>
 
int isprime(long);

int main(){
  int N, n, t = 0;
  long L;

  scanf("%d\n",&N);

  for(n = 0; n < N; n++){
    scanf("%ld\n", &L);
    if (L==2){
       t++;
    }else if(L>2){
       t+=isprime(L);
    }
  }
  printf("%d\n",t);
  return 0;
}

int isprime(long L){
  long i = 3;
  long Ls = (long)sqrt(L);
  if (!(L%2)){
      return 0;
  }
  while (i <= Ls){
    if(!(L%i)){
       return 0;
    }
    i += 2;
  }
  return 1;
}