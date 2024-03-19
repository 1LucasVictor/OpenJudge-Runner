#include<stdio.h>

int main(){
  int n,m;
  int s;
  int c;
  int i;
  int a[4];

  scanf("%d %d", &n, &m);

  for(i = 1;i <= 3;i++) a[i] = 9999;

  for(i = 0;i < m;i++){
    scanf("%d %d", &s, &c);

    if(a[s] > c) a[s] = c;
  }

  if(n == 1){
    if(a[1] == 9999) printf("-1\n");

    else printf("%d\n", a[1]);
  }

  else if(n == 2){
    if(a[1] == 9999 || a[1] == 0) printf("-1\n");

    else if(a[2] == 9999) printf("%d\n", a[1]*10);

    else printf("%d\n", a[1]*10 + a[2]);
  }

  else if(n == 3){
    if(a[1] == 9999 || a[1] == 0) printf("-1\n");

    else if(a[2] == 9999 && a[3] == 9999) printf("%d\n", a[1]*100);

    else if(a[2] == 9999 && a[3] != 9999) printf("%d\n", a[1]*100 + a[3]);

    else if(a[2] != 9999 && a[3] == 9999) printf("%d\n", a[1]*100 + a[2]*10);

    else printf("%d\n", a[1]*100 + a[2]*10 + a[3]);
  }

  return 0;
}
