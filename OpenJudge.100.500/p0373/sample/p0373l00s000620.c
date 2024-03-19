#include <stdio.h>
#define N 100000

int main(void){
  int a, b,i=0, j=0;
  int p[N], q[N];
  int k, l;

  while(scanf("%d %d", &a, &b), a!=0 && b!=0){
    p[i] = a;
    q[i] = b;
    i++;
  }

  while(j<i){
    for(k=1; k<=p[j];k++){
      if(k==1 || k==p[j]){
        for(l=1; l<=q[j]; l++) //各フレームの最初と最後の行の処理
          printf("#");
      }
      else{ //各フレームの上の行以外の行の処理
        printf("#");
        for(l=1; l<=(q[j]-2); l++)
          printf(".");
        printf("#");
      }
      printf("\n");
    }
    printf("\n");
    j++;
  }

    return 0;
}

