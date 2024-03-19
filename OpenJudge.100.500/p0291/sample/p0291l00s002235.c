#include <stdio.h>
int main(void){
  int n,i,j,Rmax,R[200000];

  scanf("%d",&n);
  for (i = 0; i < n; i++) {
    scanf("%d",&R[i]);
  }

  Rmax = R[n-1] - R[n-2];
  for (i = n-1; i >= 1; i--) {
    if (R[i] - R[i-1] > 0) {
      Rmax = R[i] - R[i-1];
      break;
    }else if (R[i] - R[i-1] > Rmax) {
      Rmax = R[i] - R[i-1];
    }
  }

  j = i;
  for (; i >= 1; i--) {
    if (R[i] > R[j]) {
      j = i;
    }
    if (R[j] - R[i-1] > Rmax) {
      Rmax = R[j] - R[i-1];
    }
  }

  printf("%d", Rmax);




 return 0;
}

