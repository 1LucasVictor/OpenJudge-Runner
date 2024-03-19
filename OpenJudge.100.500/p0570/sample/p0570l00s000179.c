#include <stdio.h>
int main(void)
{
  int a,b,k;
  scanf("%d%d",&a,&b);
  k = a+b;
  if(k%2==0){
  printf("%d\n",k/2);
  }else{
    puts("IMPOSSIBLE");
  }
  return 0;
}
