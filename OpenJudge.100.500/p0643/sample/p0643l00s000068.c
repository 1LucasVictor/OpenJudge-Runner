#include <stdio.h>
#include <stdlib.h>

int main()
{
      long long int a,b;
      scanf("%lld %lld",&a,&b);
      if((a*b)%2==0)
        printf("Even\n");
      if((a*b)%2!=0)
        printf("Odd\n");
      return 0;
}
