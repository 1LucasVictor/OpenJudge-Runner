#include<stdio.h>
#include<math.h>
int main() {
  int i,n,m,s,c,x;
  scanf("%d %d",&n,&m);
  int ansnum[n + 1],firstcheck[n + 1];

  for (i = 1;i <= n;i ++) {
    ansnum [i] = 0;
    firstcheck[i] = 1;
  }
  for (i = 1;i <= m;i ++) {
    scanf("%d %d",&s,&c);
    if (firstcheck[s] == 1) {
      ansnum[s] = c;
      firstcheck[s] = 0;
    }
    else if (ansnum[s] > c) {
        ansnum[s] = c;
      }
  }
  if (m == 0 && n != 1) {
    ansnum[1] = 1;
  }
  x = 0;
  if (n == 1 && ansnum[1] == 0) {
    x = 0;
    printf("%d",x);
  }
  else if (ansnum[1] != 0) {
      for (i = n - 1;i >= 0;i --) {
        x = x + ansnum[n - i] * pow(10,i);
      }
      printf("%d",(int)x);
    }
    else {
      x = -1;
      printf("%d",x);
    }
}
