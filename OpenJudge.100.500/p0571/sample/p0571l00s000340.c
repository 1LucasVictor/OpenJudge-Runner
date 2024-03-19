/* 133a */
#include<stdio.h>
#include<math.h>
int main(void)
{
  int n,a,b;
  scanf("%d %d %d",&n,&a,&b);
  if(n*a>b){
    printf("%d\n",b);
  }
  if(n*a<=b){
    printf("%d\n",n*a);
  }
  return 0;
}
