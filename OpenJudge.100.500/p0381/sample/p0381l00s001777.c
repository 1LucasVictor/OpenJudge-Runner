#include<stdio.h>
int main(void) {
  int n[100], x[100], i = 0, j, k, l, m, c;
  while(1) {
    scanf("%d %d",&n[i], &x[i]);
    if(n[i] == 0 && x[i] == 0) {
      break;
    }
    if(n[i] >= 3 && x[i] >= 0 && n[i] <=100 && x[i] <= 300) {
      i++;
    }
  }
  for(j = 0; j < i; j++) {
    c = 0;
    for(k = n[j]; k > 2; k--) {
      for(l = k-1; l > 1; l--) {
        for(m = l-1; m > 0; m--){
          if((k+l+m) == x[j]) c++;
        }
      }
    }
    printf("%d\n",c);
  }
  return 0;
}
