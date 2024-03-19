#include <stdio.h>

int main(void)
{
	int in,t,n;
	
	
	do{
		t=0;
		scanf("%d",&in);
		if(in)
		{
			n=in;
			do{
				t+= (n%10);
				n /= 10;
			}while(n);
			
			printf("%d\n",t);
		}
		
	}while(in);
	
	
	return 0;
}