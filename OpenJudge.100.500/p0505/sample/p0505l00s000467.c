#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  int n;
  int s,i,h;
  int cnt = 0;

  scanf("%d %d", &h, &n);

  for(i = 0;i < n;i++){
    scanf("%d", &s);
    cnt += s;
  }

  if(h <= cnt) printf("Yes\n");

  else printf("No\n");

  return 0;
}