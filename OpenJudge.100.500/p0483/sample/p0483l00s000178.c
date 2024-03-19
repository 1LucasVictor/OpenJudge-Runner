#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(){
  int n;
  int a,b,c;
  scanf("%d", &n);

  a = n % 10;
  b = (n/10) % 10;
  c = n/100;

  if(a == 7 || b == 7 || c == 7) printf("Yes\n");

  else printf("No\n");

  return 0;
}
