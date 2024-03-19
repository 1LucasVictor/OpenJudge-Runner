#include <stdio.h>

int main(int argc, char const *argv[]) {
   int D,N;
  scanf("%d %d",&D,&N );

  if(D==0){
    printf("%d",N );
    return 0;
  }

  else if(D==1){
    printf("%d",N*100 );
    return 0;
  }

  else if(D==2){
    printf("%d",N*10000 );
    return 0;
  }
  else
  return 0;
}
