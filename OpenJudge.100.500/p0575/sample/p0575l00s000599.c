#include<stdio.h>
int main()
{
	int X,A;
	while(~scanf("%d%d",&X,&A))
	{
	  if(X<A)printf("%d\n",0);
	  else printf("%d\n",10);
    }
	return 0;
}