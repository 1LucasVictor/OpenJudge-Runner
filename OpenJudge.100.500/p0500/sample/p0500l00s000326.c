#include<stdio.h>

int main(){
  int n,m;
  int i;
  int a[4];
  int s,c;
  int flag = 0;

  scanf("%d %d", &n, &m);

  for(i = 1;i <= 3;i++) a[i] = 10;

  for(i = 0;i < m;i++){
    scanf("%d %d", &s, &c);

    if(a[s] != 10 && a[s] != c){
      flag = 1;
    }

    else a[s] = c;
  }

  if(flag == 1){
    printf("-1\n");
    return 0;
  }

  if(n == 1 && a[1] == 10){
    printf("0\n");
    return 0;
  }

  if(a[1] == 0){
    printf("-1\n");
    return 0;
  }

  if(a[1] == 10) a[1] = 1;

  if(n == 2){
    if(a[2] == 10) a[2] = 0;
    printf("%d\n", 10*a[1] + a[2]);
    return 0;
  }

  if(n == 3){
    if(a[2] == 10) a[2] = 0;
    if(a[3] == 10) a[3] = 0;

    printf("%d\n", 100*a[1] + 10*a[2] + a[3]);
  }

  return 0;
}
