#include<stdio.h>
int main(){
  int a,b,num;
  scanf("%d%d",&a,&b);
  if((b-1)%(a-1)==0)
    num=(b-1)/(a-1);
  else
    num=(b-1)/(a-1)+1;
  printf("%d\n",num);
  return 0;
}
