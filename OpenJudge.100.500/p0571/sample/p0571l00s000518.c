#include<stdio.h>
int main()
{
  int n,a,b,c;
  scanf("%d %d %d",&n,&a,&b);
  c = n*a;
  if(c <= b){
    printf("%d\n",c);
  }
  else printf("%d\n",b);
}