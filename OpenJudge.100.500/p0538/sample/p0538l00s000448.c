#include <stdio.h>
int main(void)
{
  int a,b,c;
  scanf("%d%d",&a,&b);
  if(a<10 && b<10){
    c=a*b;
    printf("%d\n",c);
  }
  else{
    printf("-1\n");
  }
  return 0;
}