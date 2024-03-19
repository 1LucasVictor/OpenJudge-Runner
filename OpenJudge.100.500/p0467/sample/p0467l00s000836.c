#include<stdio.h>
int main()
{long long int a,b,c,k,sum=0;
     scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
     while(k!=0&&a!=0)
     {sum++;
     a--;k--;
     }
      while(k!=0&&b!=0)
     {b--;k--;
     }
      while(k!=0&&c!=0)
     {sum--;
     c--;k--;
     }
     printf("%lld\n",sum);
}
