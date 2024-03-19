#include <stdio.h>
int main()
{
   long long int n,i,c=0;

    scanf("%lld",&n);
  while(n!=0)
  {
      i=n%10;
      if(i==7)
        c++;
      n/=10;
  }
  if(c==0)
    printf("No\n");
  else
    printf("Yes\n");
}
