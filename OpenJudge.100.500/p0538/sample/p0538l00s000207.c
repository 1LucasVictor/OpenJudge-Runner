#include <stdio.h>
int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  if (a>9) printf("-1\n");
  else if (b>9) printf("-1\n");
  else printf("%d\n",a*b);
  return 0;
}