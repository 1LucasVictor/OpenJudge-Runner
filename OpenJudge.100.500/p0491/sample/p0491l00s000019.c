#include<stdio.h>
#include<math.h>
int main()
{long long int n,k,cmp;
 scanf("%llu%llu",&n,&k);
 if((n==k)||(n%k==0))
   printf("0");
 else
 {cmp=n;
  while(n<=cmp)
  {n=abs(n-k);
   if(n<cmp)
     cmp=n;
  }printf("%llu",cmp);
 }
}
