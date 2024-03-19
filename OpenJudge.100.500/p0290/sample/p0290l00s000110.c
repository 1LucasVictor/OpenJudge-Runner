#include<stdio.h>
#define Number 100
int main()
{
	int n;
	int a[Number];
	int i,j;
	int flag=0;
	int c=0;
	int c1=0;

	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		   for(j=2;j<a[i];j++)
		    {
		    	if(a[i]%j==0)
		    		flag=1;
		    }
		 if(flag==0)
		 	c++;
		 flag=0;
		}
	printf("%d\n",c);
}

    
