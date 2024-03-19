#include <stdio.h>

int main(){
  int n, x, i, j, k, c;
  while(scanf("%d%d", &n, &x) && n && x){
    c = 0;
    for(i = 1;i <= n - 2;i++){
      for(j = i + 1;j <= n - 1;j++){
        for(k = j + 1;k <= n;k++){
          if(i != j && i != k && j != k && i + j + k == x) c++;
          if(i + j + k > x) break;
        }
        if(i + j > x) break;
      }
    }
    printf("%d\n", c);
  }
  return 0;
}