#include <stdio.h>

int GCD(int x, int y){

  int G, i, j;

  if(x >= y){

      j = x % y;

      while(j>0){

        x = y;

        y = j;

        j = x % y;

    }

      G = y;

  }else{

      j = y % x;

      while(j>0){

        y = x;

        x = j;

        j = y % x;

      }

      G = x;

  }

  return G;

}

int LCM(int x, int y){

  int i, L;

  for(i=1;i>=1;i++){

    L = x * i;

    if(L % y == 0){

      break;

    }

  }

    return L;

}

int main(){

  int x, y, G, L;

  while(scanf("%d%d", &x, &y)!=-1){

    G = GCD(x, y);

    L = LCM(x, y);

    printf("%d %d\n", G, L);

  }

  return 0;

}