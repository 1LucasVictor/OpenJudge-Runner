#include <stdio.h>
#include <math.h>

int main(void) {
  int n,m,s[5],c[5];
  int i,j;
  int o;

  scanf("%d %d", &n, &m);

  if(m == 0){
    o = (int)(pow(10, (double)(n - 1)) + 0.5);
    printf("%d", o);
    return 0;
  }

  for(i = 0;i < m;i++){
    scanf("%d %d", &s[i], &c[i]);
    if(n != 1 && s[i] == 1 && c[i] == 0){
      printf("-1");
      return 0;
    }
  }

  for(i = 0;i < m-1;i++){
    for(j = i+1;j < m;j++){
      if(s[i] == s[j]){
        if(c[i] != c[j]){
          printf("-1");
          return 0;
        }
        if(c[i] == c[j]){
          c[j] = 0;
        }
      }
    }
  }

  o = 0;
  for(i = 0;i < m;i++){
    o += c[i] * (int)(pow(10, (double)(n - s[i])) + 0.5);
  }

  printf("%d", o);
}