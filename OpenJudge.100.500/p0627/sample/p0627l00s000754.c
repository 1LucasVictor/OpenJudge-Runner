#include <stdio.h>
#include <stdlib.h>

int main()
{int n,m,q,p,o;
 while(~scanf("%d%d",&p,&q))
 {n=p+q;
  m=p-q;
  o=p*q;
  if(p==0&&q==0)
   printf("0\n");
  if((n>m&&m>o)||(n>o&&o>m))
  printf("%d\n",n);
  if((m>n&&n>o)||(m>o&&o>n))
  printf("%d\n",m);
  if((o>n&&n>m)||(o>m&&m>n))
  printf("%d\n",o);
 }

    return 0;
}
