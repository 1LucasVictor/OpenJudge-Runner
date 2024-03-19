#include<stdio.h>
int main(void)
{
  int a, b, k, i=0, x=1, m[x], j=1;
  scanf("%d %d %d", &a, &b, &k);
  while (i<=50) {
    if(a%j==0 && b%j==0){
      m[x]=j;
      x+=1;
    }
    j+=1;
    i+=1;
  }
  printf("%d", m[k]);
  return 0;
}
