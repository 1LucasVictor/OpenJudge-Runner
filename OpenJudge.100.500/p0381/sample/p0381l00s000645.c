#include <stdio.h>
 
int main(){
  int n, x, i, j, k, c = 0;
  while(scanf("%d%d", &n, &x)){
    if(n == 0 && x == 0) break;
    for(i = 1;i < n - 1;i++)
      for(j = i + 1;j < n;j++)
        for(k = j + 1;k < n + 1;k++)
          if((i + j + k) == x) c++;
    printf("%d\n", c);
    c = 0;
  }
  return 0;
}

