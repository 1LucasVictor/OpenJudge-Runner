#include<stdio.h>
int main()
{
	int a,b,x,y,z;
	scanf("%d%d",&a,&b);
	
	x=a+b;
	y=a-b;
	z=a*b;
	
	if(x>y){
		if(x>z){
			printf("%d\n",x);
		}
		else printf("%d\n",z);
	}
	
	else printf("%d\n",y);
 
	return 0;
}