#include<stdio.h>
int main()
{
  long n,i,d,c=0,a[5],k=0;
  scanf("%ld",&n);
  while(n!=0)
  {
    d=n%10;
    a[k]=d;
    k++;
    n=n/10;
  }
  for(i=0;i<3;i++)
  {
    if(a[i]==a[i+1])
    {
      c++; break;
    }
  }
  if(c>0)
  {
    printf("Bad");
  }
  else
  {
    printf("Good");
  }
  return 0;
}