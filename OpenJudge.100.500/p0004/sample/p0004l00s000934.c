#include"stdio.h"
 
int max(int a,int b)

{
	if(!b)
	{
		return a;
	}
	return max(b,a%b);
}
int main()
{
	int m,n,temp;
         while (scanf("%d%d", &m, &n) != EOF)
	{
		     
	    	
		 
			if(m>n)
			{
				int a=max(m,n) ;
			printf("%d %d\n",a,n/a*m);
			}
			else
			{
				temp=m;
				m=n;
				n=temp;
				int a=max(m,n);
			printf("%d %d\n",a,n/a*m);
				
			}
		 	
		}
	}