#include<stdio.h>

int main()
{
  int n, x, i, j, k;
  int count=0;

  while(1){
    scanf("%d%d", &n, &x);
    if(n == 0 && x == 0) break;

    for(i = 1; i <= n; i++){
      for(j = i+1; j <= n; j++){
        for(k = j+1; j <= n; j++){
          if(x == i+j+k) count++;
        }
      }
    }
  }

  printf("%d\n", count);
  return 0;
}