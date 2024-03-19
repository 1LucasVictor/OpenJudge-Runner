#include <stdio.h>
#include <math.h>

int main(void) {
  int N,n,t=0;
  long L;
  scanf("%d\n",&N);
  for(n=0;n<N;n++) {
    scanf("%ld\n",&L);
    if (L==2) t++;
    else if (L>2) {
      if (L%2){
        long Ls = (long)sqrt(L);
        long i=3; int a=1;
        while (i<=Ls) {
          if(!(L%i)) {a--;break;}
          i+=2;
        }
        t+=a;
      }
    }
  }
  printf("%d\n",t);
  return 0;
}