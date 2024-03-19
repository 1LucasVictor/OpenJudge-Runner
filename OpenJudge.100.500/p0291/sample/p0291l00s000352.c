#include <stdio.h>

#define NMAX 200002

int main(){

  int n;
  scanf("%d%*c", &n);

  long r[NMAX];
  
  int i,j;
  for(i = 0; i < n; i++){
    scanf("%ld%*c", &r[i]);
  }

  int min = r[0], max = 0, tmp;
  for(i = 0; i < n-1; i++){
    if(r[i] < min){
      min = r[i];
      continue;
    }
    tmp = r[i]- min;
    if(tmp > max) max = tmp;
  }

  if(max == 0) printf("-1\n");
  else printf("%d\n", max);

  return 0;
}