#include <stdio.h>

int main(void) {
	
	int l,m,n;
	
	scanf("%d %d %d",&l,&m,&n);
	
	if(l > m)
	{
		int temp;
		
		temp =l;
		
		l=m;
		m=temp;
		
	}
	if (m>n)
	{
		int temp1;
		
		temp1 =m;
		
		m=n;
		n=temp1;
	}
	if (l>m)
	{
		int temp2;
		
		temp2=l;
		
		l=m;
		m=temp2;
		
	}
	 
	
	
	printf("%d %d %d\n",l,m,n);
	
	// your code goes here
	return 0;
	
	
	
}

