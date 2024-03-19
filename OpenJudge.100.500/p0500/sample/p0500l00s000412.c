#include<stdio.h>

int solve(int a[], int n,int flag){
  if(flag == 1) return -1;

  if(n == 1){
    if(a[1] == -1) return 0;

    else return a[1];
  }

  if(n == 2){
    if(a[1] == 0) return -1;

    if(a[1] == -1) a[1] = 1;
    if(a[2] == -1) a[2] = 0;

    return 10*a[1] + a[2];
  }

  if(n == 3){
    if(a[1] == 0) return -1;

    if(a[1] == -1) a[1] = 1;
    if(a[2] == -1) a[2] = 0;
    if(a[3] == -1) a[3] = 0;

    return 100*a[1] + 10*a[2] + a[3];
  }
}

int main(){
  int n,m;
  int i;
  int a[4];
  int s,c;
  int flag = 0;

  scanf("%d %d", &n, &m);

  for(i = 1;i <= n;i++) a[i] = -1;

  for(i = 0;i < m;i++){
    scanf("%d %d", &s, &c);

    if(a[s] != -1 && a[s] != c) flag = 1;

    a[s] = c;
  }

  printf("%d\n", solve(a,n,flag));

  return 0;
}