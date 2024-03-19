#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void){
  int N, D, x[256], y[256], count=0;

  scanf("%d %d", &N,&D);

  if((1>N)&&(N>2*10*10*10*10*10)){
    printf("eeror");
    exit(1);
  }
  if((0>D)&&(D>2*10*10*10*10*10)){
    printf("eeror");
    exit(1);
  }


  for ( int i = 1; i <= N; i++) {
      scanf("%d %d", &x[i],&y[i]);

      if((x[i]<=2*10*10*10*10*10)&&(y[i]<=2*10*10*10*10*10)){
        if((x[i]>=-2*10*10*10*10*10)&&(y[i]>=-2*10*10*10*10*10)){
        if(sqrt(x[i]*x[i]+y[i]*y[i])<=D){
          count++;
      }
    }

      }
  }
  printf("%d", count);
  return 0;
}
