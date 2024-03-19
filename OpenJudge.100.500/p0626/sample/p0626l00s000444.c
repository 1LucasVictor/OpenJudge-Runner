#include <stdio.h>

int main(int argc, char const *argv[]) {
   int D,N;
  scanf("%d %d",&D,&N );

  if(D==0){
    if(N<100) printf("%d",N );
    else if(N==100) printf("%d",N+1 );
  }

  else if(D==1){
    if(N<100) printf("%d",N*100 );
    else if(N==100) printf("%d",N*100+100 );
    return 0;
  }

  else if(D==2){
    if(N<100) printf("%d",N*10000 );
    else if(N==100) printf("%d",N*10000+10000 );
    return 0;
  }

  return 0;
}
