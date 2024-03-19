#include<stdio.h>
int main()
{
	int a,r;
	scanf("%d",&a);
	while(a!=0)
	{
	    r=a%10;
	    a/=10;
	    if(r==7)
	    {
	        break;
	    }
	}
	if(r==7){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	
	return 0;
}