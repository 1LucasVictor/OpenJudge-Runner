#include<stdio.h>

int main(){
  int n;
  int m;
  int s,c;
  int i;
  int a[4];

  for(i = 1;i <= 3;i++) a[i] = 10;

  scanf("%d %d", &n, &m);

  for(i = 0;i < m;i++){
    scanf("%d %d", &s, &c);

    if(a[s] > c) a[s] = c;
  }

  if(n == 1){
    printf("%d\n", a[1] % 10);
  }

  else if(n == 2){
    if(a[1] % 10 == 0) printf("-1\n");

    else printf("%d\n", (a[1] % 10)*10 + a[2] % 10);
  }

  else{
    if(a[1] % 10 == 0) printf("-1\n");

    else printf("%d\n", 100*(a[1] % 10) + (a[2] % 10)*10 + a[3] % 10);
  }

  return 0;
}