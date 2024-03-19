#include <stdio.h>
int main()
{
  int a,b,c,sa;
  int i,j=0;
  scanf("%d%d%d",&a,&b,&c);
 

  for(i=b;i>=a;i--){
    if(c%i==0)j++;
  }
  printf("%d\n",j);
  return 0;
}