#include <stdio.h>
#include<stdlib.h>
int main() 
{
  int c=0,i,p,q;
  long int a,b;
  scanf("%d %ld",&a,&b);
  p=a<b?b:a;
  q=a<b?a:b;
  for(i=q;i<p;i++)
  {
    if(abs(a-i)==abs(b-i))
    {
      c++;
      break;
    }

  }
  if(c==0)
  {
    printf("IMPOSSIBLE");
  }
  else
  {
    printf("%d",i);
  }
  return 0;
}