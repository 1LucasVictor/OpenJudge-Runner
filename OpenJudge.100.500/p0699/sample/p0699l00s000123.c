#include <stdio.h>
int main(){
  int a, b, c;
  scanf("%d %d %d",&a,&b,&c);
  int f = 0, s = 0;
  if(a == 5) ++f;
  if(b == 5) ++f;
  if(c == 5) ++f;
  if(a == 7) ++s;
  if(b == 7) ++s;
  if(c == 7) ++s;
  if(f == 2 && s == 1) printf("YES\n");
  else printf("NO\n");
}