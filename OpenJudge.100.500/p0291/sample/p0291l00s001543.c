#include <stdio.h>
#include <stdlib.h>

int Benefit(int *,int *);

int main() {
  int *price_array;
  int n;
  int benefit;
  int max_benefit;
  int i,j;

  scanf("%d",&n);
  price_array = (int *)malloc(n * sizeof(int));
  for(i=0;i<n;i++) {
    scanf("%d",price_array+i);
  }

  for(i=0;i<n;i++) {
    for(j=i+1;j<n;j++) {
      benefit = Benefit(price_array+i,price_array+j);
      if(j==1) max_benefit = benefit;
      else
      if(max_benefit < benefit) {
        max_benefit = benefit;
      }
    }
  }

  printf("%d\n",max_benefit);

  return 0;
}

int Benefit(int *x,int *y) {
  return *y-*x;
}

