#include <stdio.h>

int main(){
  int x[3], i, j, a;

  scanf("%d %d %d",&x[0], &x[1], &x[2]);

  for(i=0;i<3;i++) {
    for(j=2;j>i;j--) {
      if(x[j]<x[j-1]) {
        a = x[j];
        x[j] = x[j-1];
        x[j-1] = a;
      }
    }
  }



  for(i=0;i<3;i++) {
    printf("%d", x[i]);
    if(i!=2) printf(" ");
    else printf("\n");
}

  return 0;
}

