#include<stdio.h>
#include<stdlib.h>
typedef long long ll;
int main(void)
{
  int n,t;
  scanf("%d",&n);
  t=n%10;
  if(t == 3) printf("bon");
  else if((t==0)||(t==1)||(t==6)||(t==8)) printf("pon");
  else printf("hon");
  
  return 0;
}