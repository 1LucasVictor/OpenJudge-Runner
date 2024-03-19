#include<stdio.h>

int main(){
  int n,m;
  int s;
  int c;
  int i;
  int a[4];

  scanf("%d %d", &n, &m);

  for(i = 1;i <= 3;i++) a[i] = 10;

  for(i = 0;i < m;i++){
    scanf("%d %d", &s, &c);

    if(a[s] > c) a[s] = c;
  }

  if(n == 1){
    printf("%d\n", a[1] % 10);
  }

  else if(n == 2){
    if(a[1] % 10 == 0) printf("-1\n");

    else printf("%d\n", 10*a[1] + 10*(a[2] % 10));
  }

  else{
    if(a[1] % 10 == 0) printf("-1\n");

    else printf("%d\n", 100*a[1] + 10*(a[2] % 10) + a[3] % 10);
  }

  return 0;
}