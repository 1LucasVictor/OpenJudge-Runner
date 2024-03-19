#include <stdio.h>
int main(void)
{
	int a,b,c,d,s;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	if((b<c)||(a>d))
	  s=0;
	else 
	{
		if(a<c)
	      if(b>d)
	        s=d-c;
	      else s=b-c;
	    else if(b<d)
	         s=b-a;
	         else
	         s=d-a;
	}
	printf("%d",s);
	return 0;
}