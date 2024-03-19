#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i,n;
  double debt,debt2,r;

  if (scanf("%d",&n)<1) exit(1);
  debt = 1.0e5;
  if (n==0) printf("%.0f\n",debt);
  else {
    for(i=0;i<n;i++) {
      debt = debt*1.05;
      debt2 = (double)(int)(debt/1.0e3)*1.0e3;
      r = debt-debt2;
      if (r!=0) debt = debt2+1.0e3;
    }
    printf("%.0f\n",debt);
  }
  return 0;
}