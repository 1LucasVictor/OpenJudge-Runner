#include<stdio.h>

int main(void)
{
  int k,a,b;
  int ct=0;
  int i;
  scanf("%d",&k);
  scanf("%d %d",&a,&b);
    i=k;
  while(k<=b)
  {
    if(a<=k && k<=b)
    {
      ct++;
    }
    k=k+i;
  }
  if(ct>0) {
    printf("OK");
  }
    else {
      printf("NG");
    }
}