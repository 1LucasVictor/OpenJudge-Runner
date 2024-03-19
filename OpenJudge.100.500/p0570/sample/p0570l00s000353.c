#include <stdio.h>

int main()
{
  int i,t;
  int n;
  scanf("%d %d",&i,&t);

  if(i>t)
    {if((i-t)%2 ==0)
        n=(i-t)/2;
      printf("%d",n+t);
    }
 if(i<t)
    {if((t-i)%2 ==0)
        n=(t-i)/2;
      printf("%d",n+i);
    }

 else
   printf("IMPOSSIBLE");
}