#include<stdio.h>

int main(void)
{
  int n,s;double sa;
  scanf("%d",&n);
  s=100;sa=100;
  for(int i;i<n;i++)
    if((s*=1.05)!=(sa*=1.05)){
      s+=1;sa=s;
    }
  s*=10*10*10;
  printf("%d\n",s);
  return(0);
}
    
      