#include <stdio.h>

int main()
{	int n,i,a,b;
	scanf("%d",&n);
 	for(i=1;i<10;i++)
    {
 		a=n%i;
        b=n/i;
	}
 	if(a=!0)
      if(b<10)
        printf("Yes\n");
      else
        printf("No\n");
    else
        printf("No\n");
    }