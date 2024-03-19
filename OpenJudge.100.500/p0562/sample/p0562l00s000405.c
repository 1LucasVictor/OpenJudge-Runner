#include<stdio.h>
int main(void){
  int a,b,c=0;
  scanf("%d%d",&a,&b);
  a--;
  b--;
  if(b%a)
  c=1;
  c+=b/a;
  printf("%d\n",c);
  return 0;
}
